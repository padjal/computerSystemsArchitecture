/**
 * beast.cpp - contains functions for working with beast
 */

#include "beast.h"
#include <fstream>
#include "rnd.h"

// Enter beast parameters form file
void in(beast &be, std::ifstream &ifst){
    int type;
    ifst >> be.name >> be.weight >> type;

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
void out(beast &be, std::ofstream &ofst){
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
    ofst << "It is a Beast: name = "
    << be.name << ", weight = "
    << be.weight << ", who is a: "
    << type << std::endl;
}