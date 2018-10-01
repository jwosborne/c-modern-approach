#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "array.c"
#include "tests.c"

int main(int argc, char *argv[])
{
    test();

    return 0;
}

void test()
{
    initSizeTest();
    initCapacityTest();
    isEmptyTest();
    resizeTest();
    atTest();
    insertTest();
    prependTest();
    findTest();
    deleteTest();
    removeTest();
}
