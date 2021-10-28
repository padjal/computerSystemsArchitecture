#include <cstdio>
#include "fish.h"
#include "bird.h"
#include "beast.h"

/**
 * Enter Animal parameters from file.
 * @param \*file The file stream used for the data.
 * @return The Animal with given properties.
 */
Animal* Animal::staticIn(FILE *file) {
    Animal* a = nullptr;
    int k;
    fscanf(file,"%i", &k);
    switch (k) {
        case 1:
            a = new Fish;
            break;
        case 2:
            a = new Bird;
            break;
        case 3:
            a = new Beast;
            break;
    }
    a ->in(file);
    return a;
}

Animal* Animal::staticInRnd() {
    Animal* animal;
    auto k = rand() % 3 + 1;
    switch (k) {
        case 1:
            animal = new Fish;
            break;
        case 2:
            animal = new Bird;
            break;
        case 3:
            animal = new Beast;
            break;
    }
    animal->inRnd();
    return animal;
}
