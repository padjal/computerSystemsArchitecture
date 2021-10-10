#ifndef __animal__
#define __animal__

#include "fish.h"
#include "bird.h"
#include "beast.h"
#include <string>

/*A struct which describes all animals*/
struct animal{
    // A key for each type of animal
    enum key{FISH, BIRD, BEAST};

    key k; // key
    std::string name;
    int weight;

    union {
        fish f;
        bird b;
        beast c;
    };
};

// Enter animal details from file.
animal *In(std::ifstream &ifdt);

// Enter animal details randomly.
animal *InRnd();

// Display animal details.
void Out(animal &s, std::ofstream &ofst);

#endif //__animal__

