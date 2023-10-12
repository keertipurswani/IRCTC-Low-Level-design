#include "usernamepasswordstrategy.hpp"

bool UsernamePasswordStrategy::login() {
    // Implement username/password login logic here
    cout << "enter username : ";
    string username;
    cin >> username;
    cout << endl;
    cout << "enter password : ";
    string password;
    cin >> password;
    cout << endl;

    //this calls the user module to check the login username and password matches
    return true;
}

string UsernamePasswordStrategy::getName() {
    return "Username/Password";
}
