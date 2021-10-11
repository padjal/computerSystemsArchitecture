#ifndef __fish__
#define __fish__

#include <string>
#include "rnd.h"

// Fish
struct fish{
    enum habitat{RIVER, SEA, LAKE};

    char name[255];
    int weight;
    habitat h;
};

// Enter fish parameters form file
void in(fish &f, std::ifstream &ifst);

// Enter random parameters for fish
void inRnd(fish &f);

// Output fish parameters In a formatable stream
void out(fish &f, std::ofstream &ofst);

#endif //__fish__
