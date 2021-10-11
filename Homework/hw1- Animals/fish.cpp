/**
 * fish.cpp - contains functions for working with fish
 */

#include "fish.h"

// Enter fish parameters form file
void in(fish &f, FILE *file){
    int hab;
    fscanf(file,"%s", f.name);
    fscanf(file,"%i", &f.weight);
    fscanf(file,"%i", &hab);

    if(hab == 0){
        f.h = fish::RIVER;
    }else if(hab == 1){
        f.h = fish::SEA;
    }else if(hab == 2){
        f.h = fish::LAKE;
    }
}

// Enter random parameters for fish
void inRnd(fish &f){
    f.h = static_cast<fish::habitat>(randomInt(3));
};

// Output fish parameters in a formatable stream
void out(fish &fi, FILE *file){
    char* habitat;
    switch (fi.h) {
        case 0:
            habitat = "River";
            break;
        case 1:
            habitat = "Sea";
            break;
        case 2:
            habitat = "Lake";
            break;
    }

    fprintf(file, "It is a Fish: name = %s , weight: %i, and live in: %s.\n",
            fi.name, fi.weight, habitat);
}