#ifndef NORMAL_USER_HPP
#define NORMAL_USER_HPP

#include "user.hpp"
#include "../journey/trainjourney.hpp"

class NormalUser : public User {
public:
    NormalUser(const string& username);

    void login() override;
    void displayMenu() override;

    void searchTrains(const string& departureStation, const string& arrivalStation,
        const string& date);
    void displayAvailableSeats(int compartmentId);
    bool bookSeat(int compartmentId, int seatId);
    void displayBookingDetails();

private:
    vector<TrainJourney> journeys;
    TrainJourney* selectedJourney;
};

#endif // NORMAL_USER_HPP
