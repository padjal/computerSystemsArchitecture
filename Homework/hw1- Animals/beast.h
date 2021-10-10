#ifndef __carnivore__
#define __carnivore__

#include <string>

// beast
struct beast{
    enum type{CARNIVORE, HERBIVORE, OMNIVORE};

    int type;
};

// Enter beast parameters form file
void In(beast &c, std::ifstream &ifst);

// Enter random parameters for beast
void InRnd(beast &c);

// Output beast parameters In a formatable stream
void Out(beast &c, std::ofstream &ofst);

#endif //__carnivore__
