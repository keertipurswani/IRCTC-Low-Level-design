#include "usernamepasswordstrategy.hpp"
#include "../common_include_files.hpp"

User* UsernamePasswordStrategy::login() {
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
    if (username == "admin") {
        return new Admin("Admin");
    }
    else {
        return new NormalUser("normal user");
    }
    return nullptr;
}

string UsernamePasswordStrategy::getName() {
    return "Username/Password";
}
