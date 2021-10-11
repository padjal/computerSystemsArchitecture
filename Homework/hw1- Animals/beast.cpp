/**
 * beast.cpp - contains functions for working with beast
 */

#include "beast.h"
#include "rnd.h"

// Enter beast parameters form file
void in(beast &be, FILE *file){
    int type;
    fscanf(file,"%s", be.name);
    fscanf(file,"%i", &be.weight);
    fscanf(file,"%i", &type);

    if(type == 0){
        be.type = beast::CARNIVORE;
    }else if(type == 1){
        be.type = beast::HERBIVORE;
    }else if(type == 2){
        be.type = beast::OMNIVORE;
    }
}

// Enter random parameters for beast
void inRnd(beast &be){
    be.type = randomInt(3) % 3 + 1;
}

// Output fish parameters In a formatable stream
void out(beast &be, FILE *file){
    char* type;

    switch (be.type) {
        case 0:
            type = "carnivore";
            break;
        case 1:
            type = "herbivore";
            break;
        case 2:
            type = "omnivore";
            break;
    }

    fprintf(file, "It is a Beast: name = %s , weight: %i, and is: %s.\n",
            be.name, be.weight, type);
}