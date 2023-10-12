#pragma once
#include "loginStrategy.hpp"

class EmailOtpStrategy : public LoginStrategy {
public:
    User* login() override;
    string getName() override;
};
