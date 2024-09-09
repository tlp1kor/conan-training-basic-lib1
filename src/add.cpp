#include "add.h"
#include <spdlog/spdlog.h>  // Include spdlog header

int add(int a, int b) {
    spdlog::info("LOGGING [add.cpp]: Adding {} and {}", a, b);
    return a + b;
}
