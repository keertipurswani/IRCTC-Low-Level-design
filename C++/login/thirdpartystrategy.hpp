#pragma once
#include "loginstrategy.hpp"

class ThirdPartyStrategy : public LoginStrategy {
public:
    bool login() override;
    string getName() override;
};
