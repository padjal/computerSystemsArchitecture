/**
 * fish.cpp - contains functions for working with fish
 */

#include "fish.h"
#include <fstream>

// Enter fish parameters form file
void in(fish &f, std::ifstream &ifst){
    int hab;
    ifst >> hab;
    if(hab == 0){
        f.h = fish::LAKE;
    }else if(hab == 1){
        f.h = fish::OCEAN;
    }else if(hab == 2){
        f.h = fish::RIVER;
    }
}

// Enter random parameters for fish
void inRnd(fish &f){
    f.h = static_cast<fish::habitat>(randomInt(3));
};

// Output fish parameters In a formatable stream
void out(fish &f, std::ofstream &ofst){
    ofst << "It is an Fish: name = ";
}