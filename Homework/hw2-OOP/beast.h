#ifndef __carnivore__
#define __carnivore__

#include <cstdio>
#include "animal.h"
#include "beastEnum.h"

// beast
class Beast : public Animal{
public:
    ~Beast(){}
    void in(FILE *file);
    void inRnd();
    void out(FILE *file);
    double specialNumber();

private:
    BeastEnum type_;
};

#endif //__carnivore__
