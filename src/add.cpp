#include "add.h"
#include <iostream>

int add(int a, int b) {
    std::cout << "LOGGING [add.cpp]: Adding " << a << " and " << b << std::endl;
    return a + b;
}
