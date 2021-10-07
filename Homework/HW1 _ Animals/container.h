#ifndef __container__
#define __container__

#include "animal.h"

struct container{
    enum {max_len = 10000};
    int len;
    animal *cont[max_len];
};

// Initializing the container
void Init(container &container);

// Clear the container from its elements (Memory cleanup)
void Clear(container &container);

// Enter container element from given file stream
void In(container &container, std::ifstream &ifstream);

// Random insert in container
void InRnd(container &c, int size);

// Container elements output
void Out(container &c, ofstream &ofst);

#endif //__container__