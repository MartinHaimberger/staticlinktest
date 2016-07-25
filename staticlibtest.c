//
// Created by retro on 7/25/16.
//

#include <stdio.h>
#include "staticlibtest.h"

int testfunction1(char * parameter1, int parameter2) {
    int test;
    for (test = 0; test < parameter2; ++test) {
        fprintf(stdout, "para 1 was %s, run is %d, para 2 was %d\n", parameter1,
                test, parameter2);
    }
    return -1;
}

void testfunction2(char * parameter1, int parameter2) {
    fprintf(stdout, "this is testfunction2 speaking!\n");
    fprintf(stdout, "para 1 was %s, para 2 was %d\n", parameter1,
            parameter2);
}

bool testfunction3() {
    int hohoho = 7;
    bool runloop = false;
    int test;
    for (test = 0; test <hohoho ; ++test) {
        runloop = test % 2 ? true: false;
    }
    fprintf(stdout, "SHOW IS OVER!\n");
}
