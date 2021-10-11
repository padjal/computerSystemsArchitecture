#ifndef __container__
#define __container__

#include "animal.h"

struct container{
    enum {max_len = 10000};
    int len;
    animal *cont[max_len];
};

// Initializing the container
void init(container &c);

// Clear the container from its elements (Memory cleanup)
void clear(container &c);

// Enter container element from given file stream
void in(container &c, std::ifstream &ifst);

// randomInt insert In container
void inRnd(container &c, int size);

// Container elements output
void out(container &c, std::ofstream &ofst);

#endif //__container__