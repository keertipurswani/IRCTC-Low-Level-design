#pragma once
#include "loginstrategy.hpp"

class UsernamePasswordStrategy : public LoginStrategy {
public:
    bool login() override;
    string getName() override;
};
