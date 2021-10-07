#ifndef __fish__
#define __fish__

#include <string>

// Fish
struct fish{
    enum habitat{RIVER, SEA, LAKE, OCEAN};

    habitat h;
};

// Enter fish parameters form file
void In(fish &fish, std::ifstream &ifstream);

// Enter random parameters for fish
void InRnd(fish &fish);

// Output fish parameters in a formatable stream
void Out(fish &fish, std::ofstream &ofstream)

#endif //__fish__
