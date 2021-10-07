#ifndef __animal__
#define __animal__

#include "fish.h"
#include "bird.h"
#include "carnivore.h"

/*A struct which describes all animals*/
struct animal{
    // A key for each type of animal
    enum key{FISH, BIRD, CARNIVORE};

    key k; // key
    string name;
    int weight;

    union {
        fish f;
        bird b;
        carnivore c;
    };
};

#endif //__animal__

