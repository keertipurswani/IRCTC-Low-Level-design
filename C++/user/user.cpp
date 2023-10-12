#include "user.hpp"

User::User(const std::string& username, const std::string& role)
    : username(username), role(role) {}

 std::string User::getUsername() const {
    return username;
}

 std::string User::getRole() const {
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
