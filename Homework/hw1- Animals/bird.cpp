/**
 * bird.cpp - contains functions for working with bird
 */

#include "bird.h"
#include <fstream>
#include "rnd.h"

// Enter fish parameters form file
void in(bird &bi, std::ifstream &ifst){
    int isMig;
    ifst >> isMig;

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

// Output fish parameters In a formatable stream
void out(bird &b, std::ofstream &ofst){
    ofst << "It is an Bird: name = ";
}