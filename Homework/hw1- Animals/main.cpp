/**
 * Constains main fucntion, which enables testing.
 */

#include <cstdlib>
#include <ctime>
#include <cstring>
#include <stdio.h>

#include "container.h"

void errMessage1() {
    printf("%s", "incorrect command line!\n");
    printf("%s", "  Waited:\n");
    printf("%s", "     command -f infile outfile01 outfile02\n");
    printf("%s", "Or:\n");
    printf("%s", "     command -n number outfile01 outfile02\n");
}

void errMessage2() {
    printf("%s", "incorrect qualifier value!\n");
    printf("%s", "  Waited:\n");
    printf("%s", "     command -f infile outfile01 outfile02\n");
    printf("%s", "Or:\n");
    printf("%s", "     command -n number outfile01 outfile02\n");
}

int main(int argc, char* argv[]) {
    if(argc != 5) {
        errMessage1();
        return 1;
    }

    printf("%s", "Start\n");
    container c;
    init(c);

    if(!strcmp(argv[1], "-f")) {
        FILE *f = fopen(argv[2], "r");
        in(c, f);
    }
    else if(!strcmp(argv[1], "-n")) {
        auto size = atoi(argv[2]);
        if((size < 1) || (size > 10000)) {
            printf("%s", "incorrect numer of animals = ");
            printf("%i", size);
            printf("%s", ". Set 0 < number <= 10000\n");
            return 3;
        }
        // System clock as an initializer
        srand(static_cast<unsigned int>(time(0)));
        // Filling container with random value.
        inRnd(c, size);
    }
    else {
        errMessage2();
        return 2;
    }

    // Output of container elements to file.
    FILE *f1 = fopen(argv[3], "w");
    fprintf(f1, "%s", "Filled container:\n");
    out(c, f1);
    fclose(f1);

    //TODO
    // The 2nd part of task
    FILE *f2 = fopen(argv[4], "w");
    sortContainer(c, f2);

    clear(c);
    printf("%s", "Stop\n");
    return 0;
}
