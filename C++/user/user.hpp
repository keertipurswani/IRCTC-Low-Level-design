#ifndef USER_HPP
#define USER_HPP

#include "../common_include_files.hpp"

class User {
public:
    User(const string& username, const string& role);

    virtual void login() = 0;
    virtual void displayMenu() = 0;

     string getUsername() const;
     string getRole() const;
     string getPassword() const;
     string getName() const;
     int     getAge() const;

private:
    string username;
    string role;
    string password;
    string name;
    int    age;

};

#endif // USER_HPP
