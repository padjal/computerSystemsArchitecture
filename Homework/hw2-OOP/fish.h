#ifndef __fish__
#define __fish__

#include <cstdio>
#include "rnd.h"
#include "animal.h"
#include "habitatEnum.h"

// Fish
class Fish : public Animal{
public:
    virtual ~Fish(){}
    virtual void in(FILE *file);
    virtual void inRnd();
    virtual void out(FILE *file);
    virtual double specialNumber();

private:
    Habitat habitat_;
};

#endif //__fish__
