#pragma once
#include "common_include_files.hpp"

class LoginStrategy {
public:
    virtual bool login() = 0;
    virtual string getName() = 0;
};
