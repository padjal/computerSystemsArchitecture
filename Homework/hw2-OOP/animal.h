#ifndef __animal__
#define __animal__

#include <cstdio>

/*A class which describes all animals*/
class Animal{
protected:
    char name_[255];
    int weight_;
public:
    // Animal destructor.
    virtual ~Animal() {};
    // Parse animal info.
    static Animal* staticIn(FILE *file);
    // Enter animal details from file.
    virtual void in(FILE *file) = 0;
    // Randomly generate animal.
    static Animal* staticInRnd();
    // Enter animal details randomly.
    virtual void inRnd() = 0;
    // Display animal details.
    virtual void out(FILE *file) = 0;
    //Gets the special number for the specified animal.
    virtual double specialNumber() = 0;
};

#endif //__animal__

