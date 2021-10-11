#include "animal.h"
#include <fstream>

/**
 * Enter animal parameters from file.
 * @param ifstream The file stream used for the data.
 * @return The animal with given properties.
 */
animal* in(std::ifstream &ifst){
    animal* a;
    int k;
    ifst >> k;
    switch (k) {
        case 1:
            a = new struct animal;
            a->k = animal::FISH;
            in(a->f, ifst);
            return a;
        case 2:
            a = new struct animal;
            a->k = animal::BIRD;
            in(a->bi, ifst);
            return a;
        case 3:
            a = new struct animal;
            a->k = animal::BEAST;
            in(a->be, ifst);
            return a;
        default:
            return 0;
    }
}

// randomInt input of animal details.
animal *inRnd(){
    animal* animal;
    auto k = rand() % 3 + 1;
    switch (k) {
        case 1:
            animal = new struct animal;
            animal->k = animal::FISH;
            inRnd(animal->f);
            return animal;
        case 2:
            animal = new struct animal;
            animal->k = animal::BIRD;
            inRnd(animal->bi);
            return animal;
        case 3:
            animal = new struct animal;
            animal->k = animal::BEAST;
            inRnd(animal->be);
            return animal;
        default:
            return 0;
    }
}

void out(animal &a, FILE *f){
    switch (a.k) {
        case animal::FISH:
            out(a.f, f);
            break;
        case animal::BIRD:
            out(a.bi, f);
            break;
        case animal::BEAST:
            out(a.be, f);
            break;
        default:
            fprintf(f, "%s", "Incorrect figure!\n");
    }
}