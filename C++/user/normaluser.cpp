#include "normaluser.hpp"


NormalUser::NormalUser(const string& username) : User(username, "Normal User") {}

void NormalUser::login() {
    cout << "Normal User login successful. Welcome, " << getUsername() << "!" << endl;
}

void NormalUser::displayMenu() {
    cout << "Normal User Menu:" << endl;
    cout << "1. Search Trains" << endl;
    cout << "2. Display Available Seats" << endl;
    cout << "3. Book Seat" << endl;
    cout << "4. Display Booking Details" << endl;

    int whattodo;
    cin >> whattodo;
    
}

void NormalUser::searchTrains(const string& departureStation, const string& arrivalStation,
    const string& date) {
    // Similar to the previous code for searching trains
    // Set 'selectedJourney' based on the search result
}

void NormalUser::displayAvailableSeats(int compartmentId) {
    // Similar to the previous code for displaying available seats
}

bool NormalUser::bookSeat(int compartmentId, int seatId) {
    // Similar to the previous code for booking a seat
    return true;
}

void NormalUser::displayBookingDetails() {
    // Similar to the previous code for displaying booking details
}
