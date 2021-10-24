#ifndef __carnivore__
#define __carnivore__

#include <cstdio>

// beast
struct beast{
    enum type{CARNIVORE, HERBIVORE, OMNIVORE};
    char name[255];
    int weight;
    int type;
};

// Enter beast parameters form file
void in(beast &be, FILE *file);

// Enter random parameters for beast
void inRnd(beast &be);

// Output beast parameters In a formatable stream
void out(beast &be, FILE *file);

double specialNumber(beast &be);

#endif //__carnivore__
