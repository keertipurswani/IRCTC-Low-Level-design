#ifndef ADMIN_HPP
#define ADMIN_HPP

#include "user.hpp"
#include "../transport/train/train.hpp"

class Admin : public User {
public:
    Admin(const std::string& username);

    void login() override;
    void displayMenu() override;

    void addTrain(Train& train);
    void displayTrains(const std::string& departureStation, const std::string& arrivalStation,
        const std::string& date) const;

private:
    std::vector<Train> trains;
};

#endif // ADMIN_HPP
