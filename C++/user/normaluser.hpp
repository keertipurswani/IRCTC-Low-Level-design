#ifndef NORMAL_USER_HPP
#define NORMAL_USER_HPP

#include "user.hpp"
#include "../journey/trainjourney.hpp"

class NormalUser : public User {
public:
    NormalUser(const std::string& username);

    void login() override;
    void displayMenu() override;

    void searchTrains(const std::string& departureStation, const std::string& arrivalStation,
        const std::string& date);
    void displayAvailableSeats(int compartmentId);
    bool bookSeat(int compartmentId, int seatId);
    void displayBookingDetails();

private:
    std::vector<TrainJourney> journeys;
    TrainJourney* selectedJourney;
};

#endif // NORMAL_USER_HPP
