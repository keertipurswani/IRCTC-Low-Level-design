#pragma once
#include "loginstrategy.hpp"
#include "../user/user.hpp"

enum  LOGIN_STRATEGY {
    NO_LOGIN,
    USERNAME_PASSWORD,
    EMAIL_OTP,
    THIRD_PARTY
};

class LoginManager {
private:
    LoginStrategy* strategy;

public:
    LoginManager();
    User* performLogin();
    void DisplayLoginMethods();
    void SetLoginStrategy(int loginstrategy);
};
