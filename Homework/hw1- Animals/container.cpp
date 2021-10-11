/**
 * container.cpp - Contains functions for working with a container
 */
#include "container.h"
#include "fstream"

/**
 * Initializing the container.
 * @param c A pointer to the container.
 */
void init(container &c) {
    c.len = 0;
}

/**
 * Clearing container from elements (Memory cleanup).
 * @param c The specified container.
 */
void clear(container &c) {
    for(int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

/**
 * Enter container element from a stream.
 * @param c The container used.
 * @param ifst The stream used.
 */
void in(container &c, FILE *file) {
    while(!feof(file)) {
        if((c.cont[c.len] = in(file)) != 0) {
            c.len++;
        }
    }
}

/**
 * Random input in container.
 * @param c The selected container.
 * @param size The number of elements to be inserted.
 */
void inRnd(container &c, int size) {
    while(c.len < size) {
        if((c.cont[c.len] = inRnd()) != nullptr) {
            c.len++;
        }
    }
}

/**
 * Output container elements using the given file stream.
 * @param c The container whose elements are to be displayed.
 * @param f The file stream used to write out container info.
 */
void out(container &c, FILE *f) {
    fprintf(f,"%s", "Container contains ");
    fprintf(f, "%i %s", c.len, "elements\n");
    for(int i = 0; i < c.len; i++) {
        fprintf(f,"%i: ", i+1);
        out(*(c.cont[i]), f);
    }
}

/**
 * Sorts the container elements given a predefined condition.
 * @param c
 * @param f
 */
void sortContainer(container &c, FILE *f){
    double sum = 0.0;
    for (int i = 0 ; i < c.len ; ++i) {
        sum += specialNumber(*(c.cont[i]));
    }
    double average = sum/c.len;
    fprintf(f, "The average special number is: %f\n", average);

    fprintf(f, "The sorted elements are: \n");
    for (int i = 0 ; i < c.len ; ++i) {
        if(specialNumber(*(c.cont[i])) >= average){
            out(*(c.cont[i]), f);
        }
    }
}
