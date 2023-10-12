#include "user.hpp"

User::User(const string& username, const string& role)
    : username(username), role(role) {}

 string User::getUsername() const {
    return username;
}

 string User::getRole() const {
    return role;
}
string User::getPassword() const {
    return password;
}
 string User::getName() const {
    return name;
}
 int User::getAge() const {
    return age;
}
