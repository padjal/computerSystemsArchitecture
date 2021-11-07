/**
 * beast.cpp - contains functions for working with beast
 */

#include <cstring>
#include "beast.h"
#include "rnd.h"

// Enter beast parameters form file
void Beast::in(FILE *file){
    int type;
    fscanf(file,"%s", name_);
    fscanf(file,"%i", &weight_);
    fscanf(file,"%i", &type);

    if(type == 0){
        type_ = CARNIVORE;
    }else if(type == 1){
        type_ = HERBIVORE;
    }else if(type == 2){
        type_ = OMNIVORE;
    }
}

// Enter random parameters for beast
void Beast::inRnd(){
    type_ = static_cast<BeastEnum>(randomInt(3) % 3);
    weight_ = randomInt(2000);
    strcpy(name_, "BeastName");
}

// Output fish parameters In a file stream
void Beast::out(FILE *file){
    char* type;

    switch (type_) {
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

    fprintf(file, "It is a Beast: name = %s, weight: %i, is: %s, and has a special number: %f\n",
            name_, weight_, type, specialNumber());
}

double Beast::specialNumber(){
    double charSum = 0;
    for (int i = 0 ; i < sizeof(name_) / sizeof(name_[0]) ; ++i) {
        charSum += name_[i];
    }
    return charSum / weight_;
}