#ifndef __carnivore__
#define __carnivore__

#include <string>

// carnivore
struct carnivore{
    bool isMigrating;
};

// Enter carnivore parameters form file
void In(carnivore &carnivore, std::ifstream &ifstream);

// Enter random parameters for carnivore
void InRnd(carnivore &carnivore);

// Output carnivore parameters in a formatable stream
void Out(carnivore &carnivore, std::ofstream &ofstream)

#endif //__carnivore__
