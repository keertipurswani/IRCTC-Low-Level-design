#include "loginmanager.hpp"
#include "thirdpartystrategy.hpp"
#include "usernamepasswordstrategy.hpp"
#include "emailotpstrategy.hpp"
#include "../common_include_files.hpp"

LoginManager::LoginManager() : strategy(nullptr) {}

User* LoginManager::performLogin() {
    cout << "Attempting " << strategy->getName() << " login..." << endl;
    User* user = strategy->login();
    if (user != nullptr) {
        cout << "Login successful!" << endl;
        return user;
    }
    else {
        cout << "Login failed." << endl;
        return nullptr;
    }
}

void LoginManager::SetLoginStrategy(int loginstrategy) {
    if (loginstrategy == USERNAME_PASSWORD) {
        strategy = new UsernamePasswordStrategy();
    }
    else if (loginstrategy == LOGIN_STRATEGY::EMAIL_OTP) {
        strategy = new EmailOtpStrategy();
    }
    else if (loginstrategy == LOGIN_STRATEGY::THIRD_PARTY) {
        strategy = new ThirdPartyStrategy();
    }
}
