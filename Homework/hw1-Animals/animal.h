#ifndef __animal__
#define __animal__

#include "fish.h"
#include "bird.h"
#include "beast.h"
#include <string>
#include <fstream>

/*A struct which describes all animals*/
struct animal{
    // A key for each type of animal
    enum key{FISH, BIRD, BEAST};
    key k; // key

    union {
        fish f;
        bird bi;
        beast be;
    };
};

// Enter animal details from file.
animal *in(FILE *file);

// Enter animal details randomly.
animal *inRnd();

// Display animal details.
void out(animal &a, FILE *file);

double specialNumber(animal &a);

#endif //__animal__

