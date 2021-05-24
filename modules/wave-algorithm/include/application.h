// Copyright 2021 Yurin Stanislav

#ifndef MODULES_WAVE_ALGORITHM_INCLUDE_APPLICATION_H_
#define MODULES_WAVE_ALGORITHM_INCLUDE_APPLICATION_H_

#include <string>

class Application {
public:
    Application();

    std::string operator()(int argc, const char** argv);

};

#endif  // MODULES_WAVE_ALGORITHM_INCLUDE_APPLICATION_H_
