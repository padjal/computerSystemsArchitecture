#ifndef __container__
#define __container__

#include "animal.h"

struct container{
    enum {max_len = 10000};
    int len;
    animal *cont[max_len];
};

// Initializing the container
void Init(container &c);

// Clear the container from its elements (Memory cleanup)
void Clear(container &c);

// Enter container element from given file stream
void In(container &c, std::ifstream &ifst);

// Random insert In container
void InRnd(container &c, int size);

// Container elements output
void Out(container &c, std::ofstream &ofst);

#endif //__container__