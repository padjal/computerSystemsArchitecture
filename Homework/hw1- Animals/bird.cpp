/**
 * bird.cpp - contains functions for working with bird
 */

#include "bird.h"
#include <fstream>
#include "rnd.h"

// Enter fish parameters form file
void in(bird &b, std::ifstream &ifst){
    int type;
    ifst >> type;

    if(type == 0){
        b.type = beast::CARNIVORE;
    }else if(type == 1){
        b.type = beast::HERBIVORE;
    }else if(type == 2){
        b.type = beast::OMNIVORE;
    }
}

// Enter random parameters for beast
void InRnd(beast &b){
    b.type = Random(3) % 3 + 1;
};

// Output fish parameters In a formatable stream
void Out(beast &f, std::ofstream &ofst){
    ofst << "It is an Fish: name = ";
}