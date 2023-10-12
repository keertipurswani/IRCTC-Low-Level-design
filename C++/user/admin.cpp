#include "admin.hpp"


Admin::Admin(const std::string& username) : User(username, "Admin") {}

void Admin::login() {
    std::cout << "Admin login successful. Welcome, " << getUsername() << "!" << std::endl;
}

void Admin::displayMenu() {
    std::cout << "Admin Menu:" << std::endl;
    std::cout << "1. Add Train" << std::endl;
    std::cout << "2. Display Trains" << std::endl;
}

void Admin::addTrain(Train& train) {
    trains.push_back(train);
}

void Admin::displayTrains(const std::string& departureStation, const std::string& arrivalStation,
    const std::string& date) const {

   /* std::cout << "Trains for Date: " << date << " from " << departureStation << " to " << arrivalStation << ":" << std::endl;
    for (const Train& train : trains) {
        if (train.getDepartureStation() == departureStation && train.getArrivalStation() == arrivalStation) {
            std::cout << "Train Number: " << train.getTrainNumber() << std::endl;
            std::cout << "Train Name: " << train.getTrainName() << std::endl;
            std::cout << "Departure Time: " << train.getDepartureTime() << std::endl;
            std::cout << "Arrival Time: " << train.getArrivalTime() << std::endl;
            std::cout << std::endl;
        }
    }*/
}
