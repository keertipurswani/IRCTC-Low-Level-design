#pragma once

#include "loginstrategy.hpp"

class ThirdPartyStrategy : public LoginStrategy {
public:
    User* login() override;
    string getName() override;
};
