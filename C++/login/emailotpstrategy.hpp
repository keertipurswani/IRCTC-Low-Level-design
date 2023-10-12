#pragma once
#include "loginStrategy.hpp"

class EmailOtpStrategy : public LoginStrategy {
public:
    bool login() override;
    string getName() override;
};
