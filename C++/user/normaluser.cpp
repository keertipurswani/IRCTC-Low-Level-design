#include "normaluser.hpp"


NormalUser::NormalUser(const std::string& username) : User(username, "Normal User") {}

void NormalUser::login() {
    std::cout << "Normal User login successful. Welcome, " << getUsername() << "!" << std::endl;
}

void NormalUser::displayMenu() {
    std::cout << "Normal User Menu:" << std::endl;
    std::cout << "1. Search Trains" << std::endl;
    std::cout << "2. Display Available Seats" << std::endl;
    std::cout << "3. Book Seat" << std::endl;
    std::cout << "4. Display Booking Details" << std::endl;
    
}

void NormalUser::searchTrains(const std::string& departureStation, const std::string& arrivalStation,
    const std::string& date) {
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
