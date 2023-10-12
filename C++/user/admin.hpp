#ifndef ADMIN_HPP
#define ADMIN_HPP

#include "user.hpp"
#include "../transport/train/train.hpp"

class Admin : public User {
public:
    Admin(const string& username);

    void login() override;
    void displayMenu() override;

    void addTrain(Train& train);
    void displayTrains(const string& departureStation, const string& arrivalStation,
        const string& date) const;

private:
    vector<Train> trains;
    void readDataFromFileAndAddToDB();
};

#endif // ADMIN_HPP
