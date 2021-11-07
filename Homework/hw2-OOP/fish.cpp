/**
 * fish.cpp - contains functions for working with fish
 */

#include <cstring>
#include "fish.h"

// Enter fish parameters form file
void Fish::in(FILE *file){
    int hab;
    fscanf(file,"%s", name_);
    fscanf(file,"%i", &weight_);
    fscanf(file,"%i", &hab);

    if(hab == 0){
        habitat_ = River;
    }else if(hab == 1){
        habitat_ = Sea;
    }else if(hab == 2){
        habitat_ = Lake;
    }
}

// Enter random parameters for fish
void Fish::inRnd(){
    int hab = randomInt(3) % 3;
    weight_ = randomInt(2000);
    strcpy(name_, "FishName");

    if(hab == 0){
        habitat_ = River;
    }else if(hab == 1){
        habitat_ = Sea;
    }else if(hab == 2){
        habitat_ = Lake;
    }

};

// Output fish parameters in a file stream
void Fish::out(FILE *file){
    char* habitat;
    switch (habitat_) {
        case River:
            habitat = "River";
            break;
        case Sea:
            habitat = "Sea";
            break;
        case Lake:
            habitat = "Lake";
            break;
    }

    fprintf(file, "It is a Fish: name = %s , weight: %i, lives in: %s, and has a special number of: %f\n",
            name_, weight_, habitat, specialNumber());
}

double Fish::specialNumber(){
    double charSum = 0;
    for (int i = 0 ; i < sizeof(name_) / sizeof(name_[0]) ; ++i) {
        charSum += name_[i];
    }
    return charSum / weight_;
}