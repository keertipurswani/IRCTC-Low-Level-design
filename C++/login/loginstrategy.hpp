#pragma once
#include "../common_include_files.hpp"
#include "../user/user.hpp"
#include "../user/admin.hpp"
#include "../user/normaluser.hpp"

class LoginStrategy {
public:
    virtual User* login() = 0;
    virtual string getName() = 0;
};
