/**
 * fish.cpp - contains functions for working with fish
 */

#include "fish.h"
#include <fstream>

// Enter fish parameters form file
void in(fish &f, std::ifstream &ifst){
    int hab;
    ifst >> f.name >> f.weight >> hab;

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
void out(fish &f, std::ofstream &ofst){
    char* habitat;
    switch (f.h) {
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

    ofst << "It is a Fish: name = "
    << f.name << ", weight: "
    << f.weight << ", and lives in: "
    << habitat << std::endl;
}