#include "animal.h"
#include <fstream>

/**
 * Enter animal parameters from file.
 * @param ifstream The file stream used for the data.
 * @return The animal with given properties.
 */
animal* In(std::ifstream &ifst){
    animal* a;
    std::string name;
    int k, weight;
    ifst >> name >> weight >> k;
    switch (k) {
        case 1:
            a = new struct animal;
            a->name = name;
            a->weight = weight;
            a->k = animal::FISH;
            in(a->f, ifst);
            return a;
        case 2:
            a = new struct animal;
            a->name = name;
            a->weight = weight;
            a->k = animal::BIRD;
            In(a->b, ifst);
            return a;
        case 3:
            a = new struct animal;
            a->name = name;
            a->weight = weight;
            a->k = animal::CARNIVORE;
            In(a->c, ifst);
            return a;
        default:
            return 0;
    }
}

// Random input of animal details.
animal *InRnd(){
    animal* animal;
    auto k = rand() % 3 + 1;
    switch (k) {
        case 1:
            animal = new struct animal;
            animal->k = animal::FISH;
            InRnd(animal->f);
            return animal;
        case 2:
            animal = new struct animal;
            animal->k = animal::BIRD;
            InRnd(animal->b);
            return animal;
        case 3:
            animal = new struct animal;
            animal->k = animal::BEAST;
            InRnd(animal->c);
            return animal;
        default:
            return 0;
    }
}

void Out(animal &a, std::ofstream &ofst){
    switch (a.k) {
        case animal::FISH:
            Out(a.f, ofst);
            break;
        case animal::BIRD:
            Out(a.b, ofst);
            break;
        case animal::BEAST:
            Out(a.c, ofst);
            break;
        default:
            ofst << "Incorrect figure!" << std::endl;
    }
}