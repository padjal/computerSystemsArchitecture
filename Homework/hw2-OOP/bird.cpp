/**
 * bird.cpp - contains functions for working with bird
 */

#include <cstring>
#include "bird.h"
#include "rnd.h"
#include "stdlib.h"

// Enter fish parameters form file
void Bird::in(FILE *file){
    int isMig;
    fscanf(file,"%s", name_);
    fscanf(file,"%i", &weight_);
    fscanf(file,"%i", &isMig);

    if(isMig == 0){
        isMigrating_ = false;
    }else if(isMig == 1){
        isMigrating_ = true;
    }
}

// Enter random parameters for beast
void Bird::inRnd(){
    int isMig = randomInt(2) % 2 + 1;
    weight_ = randomInt(2000);
    strcpy(name_, "BirdName");
    if(isMig == 0){
        isMigrating_ = false;
    }else if(isMig == 1){
        isMigrating_ = true;
    }
};

// Output bird parameters In a formatable stream
void Bird::out(FILE *f){
    char* migrating;

    if(isMigrating_){
        migrating = "is";
    }else{
        migrating = "is not";
    }

    fprintf(f, "It is a Bird: name = %s , weight: %i, %s migrating, and has a special number: %f\n",
           name_, weight_, migrating, specialNumber());
}

double Bird::specialNumber(){
    double charSum = 0;
    for (int i = 0 ; i < sizeof(name_) / sizeof(name_[0]) ; ++i) {
        charSum += name_[i];
    }
    return charSum / weight_;
}
