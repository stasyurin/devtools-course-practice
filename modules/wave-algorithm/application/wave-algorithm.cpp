// Copyright 2021 Yurin Stanislav

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "include/application.h"

using namespace WaveLib;

int main(int argc, const char** argv) {
    Application app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}
