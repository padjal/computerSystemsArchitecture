#ifndef __bird__
#define __bird__

#include <string>
#include "animal.h"

// bird
class Bird : public Animal{
public:
    virtual ~Bird(){}
    virtual void in(FILE *file);
    virtual void inRnd();
    virtual void out(FILE *file);
    virtual double specialNumber();

private:
    bool isMigrating_;
};

#endif //__bird__
