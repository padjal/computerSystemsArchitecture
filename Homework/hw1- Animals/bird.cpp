/**
 * bird.cpp - contains functions for working with bird
 */

#include "bird.h"
#include "rnd.h"

// Enter fish parameters form file
void in(bird &bi, FILE *file){
    int isMig;
    fscanf(file,"%s", bi.name);
    fscanf(file,"%i", &bi.weight);
    fscanf(file,"%i", &isMig);

    if(isMig == 0){
        bi.isMigrating = false;
    }else if(isMig == 1){
        bi.isMigrating = true;
    }
}

// Enter random parameters for beast
void inRnd(bird &bi){
    int isMig = randomInt(2) % 2 + 1;

    if(isMig == 0){
        bi.isMigrating = false;
    }else if(isMig == 1){
        bi.isMigrating = true;
    }
};

// Output bird parameters In a formatable stream
void out(bird &bi, FILE *f){
    char* migrating;

    if(bi.isMigrating){
        migrating = "is";
    }else{
        migrating = "is not";
    }

    fprintf(f, "It is a Bird: name = %s , weight: %i, %s migrating, and has a special number: %f\n",
            bi.name, bi.weight, migrating, specialNumber(bi));
}

double specialNumber(bird &bi){
    double charSum = 0;
    for (int i = 0 ; i < sizeof(bi.name) / sizeof(bi.name[0]) ; ++i) {
        charSum += bi.name[i];
    }
    return charSum / bi.weight;
}