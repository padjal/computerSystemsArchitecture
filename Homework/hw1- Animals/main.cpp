/**
 * Constains main fucntion, which enables testing.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cstring>

#include "container.h"

void errMessage1() {
    std::cout << "incorrect command line!\n"
            "  Waited:\n"
            "     command -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     command -n number outfile01 outfile02\n";
}

void errMessage2() {
    std::cout << "incorrect qualifier value!\n"
            "  Waited:\n"
            "     command -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     command -n number outfile01 outfile02\n";
}

int main(int argc, char* argv[]) {
    if(argc != 5) {
        errMessage1();
        return 1;
    }

    std::cout << "Start" << std::endl;
    container c;
    init(c);

    if(!strcmp(argv[1], "-f")) {
        std::ifstream ifst(argv[2]);
        in(c, ifst);
    }
    else if(!strcmp(argv[1], "-n")) {
        auto size = atoi(argv[2]);
        if((size < 1) || (size > 10000)) {
            std::cout << "incorrect numer of animals = "
                 << size
                 << ". Set 0 < number <= 10000\n";
            return 3;
        }
        // System clock as an initializator
        srand(static_cast<unsigned int>(time(0)));
        // Заполнение контейнера генератором случайных чисел
        inRnd(c, size);
    }
    else {
        errMessage2();
        return 2;
    }

    // Output of container elements to file.
    std::ofstream ofst1(argv[3]);
    ofst1 << "Filled container:\n";
    out(c, ofst1);

    // The 2nd part of task
    std::ofstream ofst2(argv[4]);
    //ofst2 << "Perimeter sum = " << PerimeterSum(c) << "\n";

    clear(c);
    std::cout << "Stop"<< std::endl;
    return 0;
}
