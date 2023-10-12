#include "transportmanager.hpp"
#include "login/loginmanager.hpp"
#include "common_include_files.hpp"

TransportManager::TransportManager() {}

TransportManager::~TransportManager() {}

TransportManager& TransportManager::getInstance() {
    //Meyers way of implementing Singleton (this is also thread-safe)
    static TransportManager instance;
    return instance;
}

void TransportManager::searchTransport(const string& source, const string& destination) {
    cout << "Searching for transport from " << source << " to " << destination << endl;
    // Implement the search logic here
}

void TransportManager::bookTransport(const string& transportType) {
    cout << "Booking " << transportType << endl;
    // Implement the booking logic here
}

User* TransportManager::login()
{
    LoginManager loginmaanger; 

    cout << "LOGIN : " << endl;
    cout << "Enter type of login ! " << endl;
    cout << "1. username/password  2. email/otp   3. google login" << endl;
    int typeoflogin;
    cin >> typeoflogin;

    loginmaanger.SetLoginStrategy(typeoflogin);
    return loginmaanger.performLogin();
}
