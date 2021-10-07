#ifndef __bird__
#define __bird__

#include <string>

// bird
struct bird{
    bool isMigrating;
};

// Enter bird parameters form file
void In(bird &bird, std::ifstream &ifstream);

// Enter random parameters for bird
void InRnd(bird &bird);

// Output bird parameters in a formatable stream
void Out(bird &bird, std::ofstream &ofstream)

#endif //__bird__
