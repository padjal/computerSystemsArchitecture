#ifndef __bird__
#define __bird__

#include <string>

// bird
struct bird{
    bool isMigrating;
};

// Enter bird parameters form file
void In(bird &b, std::ifstream &ifst);

// Enter random parameters for bird
void InRnd(bird &b);

// Output bird parameters In a formatable stream
void Out(bird &b, std::ofstream &ofst);

#endif //__bird__
