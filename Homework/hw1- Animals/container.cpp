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
void in(container &c, std::ifstream &ifst) {
    while(!ifst.eof()) {
        if((c.cont[c.len] = in(ifst)) != 0) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void inRnd(container &c, int size) {
    while(c.len < size) {
        if((c.cont[c.len] = inRnd()) != nullptr) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void out(container &c, std::ofstream &ofst) {
    ofst << "Container contains " << c.len << " elements." << std::endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        out(*(c.cont[i]), ofst);
    }
}
