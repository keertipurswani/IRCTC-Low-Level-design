#pragma once
#include "loginstrategy.hpp"

class UsernamePasswordStrategy : public LoginStrategy {
public:
    User* login() override;
    string getName() override;
};
