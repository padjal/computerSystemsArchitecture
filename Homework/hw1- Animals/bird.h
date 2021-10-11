#ifndef __bird__
#define __bird__

#include <string>

// bird
struct bird{
    bool isMigrating;
    char name[255];
    int weight;
};

// Enter bird parameters form file
void in(bird &bi, std::ifstream &ifst);

// Enter random parameters for bird
void inRnd(bird &bi);

// Output bird parameters In a formatable stream
void out(bird &bi, FILE *f);

#endif //__bird__
