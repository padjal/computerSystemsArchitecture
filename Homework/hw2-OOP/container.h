#ifndef __container__
#define __container__

#include "animal.h"

class Container{
public:
    Container();
    ~Container();
    // Enter container element from given file stream.
    void in(FILE *file);
    // randomInt insert a selected number of animals in the container.
    void inRnd(int size);
    // Container elements output.
    void out(FILE *f);
    // Sort the container by the special value for each animal.
    void sortContainer(FILE *f);

private:
    void clear();
    int len_;
    Animal *cont_[10000];
};

#endif //__container__