/**
 * container.cpp - Contains functions for working with a container
 */
#include "container.h"

/**
 * Container constructor.
 */
Container::Container(){
    len_ = 0;
}

/**
 * Container destructor.
 */
Container::~Container() {
    clear();
}

/**
 * Clearing container from elements (Memory cleanup).
 */
void Container::clear() {
    for(int i = 0; i < len_; i++) {
        delete cont_[i];
    }
    len_ = 0;
}

/**
 * Enter container element from a stream.
 * @param file The file stream used.
 */
void Container::in(FILE *file) {
    while(!feof(file)) {
        if((cont_[len_] = Animal::staticIn(file)) != 0) {
            len_++;
        }
    }
}

/**
 * Random input in container.
 * @param size The number of elements to be inserted.
 */
void Container::inRnd(int size) {
    while(len_ < size) {
        if((cont_[len_] = Animal::staticInRnd()) != nullptr) {
            len_++;
        }
    }
}

/**
 * Output container elements using the given file stream.
 * @param f The file stream used to write out container info.
 */
void Container::out(FILE *f) {
    fprintf(f,"%s", "Container contains ");
    fprintf(f, "%i %s", len_, "elements\n");
    for(int i = 0; i < len_; i++) {
        fprintf(f,"%i: ", i+1);
        cont_[i] ->out(f);
    }
}

/**
 * Sorts the container elements given a predefined condition.
 * @param f
 */
void Container::sortContainer(FILE *f){
    double sum = 0.0;
    for (int i = 0 ; i < len_ ; ++i) {
        sum += cont_[i]->specialNumber();
    }
    double average = sum/len_;
    fprintf(f, "The average special number is: %f\n", average);

    fprintf(f, "The sorted elements are: \n");
    for (int i = 0 ; i < len_ ; ++i) {
        if(cont_[i]->specialNumber() >= average){
            cont_[i] ->out(f);
        }
    }
}
