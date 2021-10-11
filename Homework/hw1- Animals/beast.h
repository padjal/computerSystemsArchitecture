#ifndef __carnivore__
#define __carnivore__

#include <string>

// beast
struct beast{
    enum type{CARNIVORE, HERBIVORE, OMNIVORE};

    int type;
};

// Enter beast parameters form file
void in(beast &be, std::ifstream &ifst);

// Enter random parameters for beast
void inRnd(beast &be);

// Output beast parameters In a formatable stream
void out(beast &be, std::ofstream &ofst);

#endif //__carnivore__
