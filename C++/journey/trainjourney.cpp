#include "trainJourney.hpp"

TrainJourney::TrainJourney(Train train, string date) : train(train), date(date) {
    // Initialize seatAvailability based on the train's compartments and seats.
    const vector<Compartment>& compartments = train.getCompartments();

    seatAvailability.resize(compartments.size());
    for (size_t i = 0; i < compartments.size(); ++i) {
        seatAvailability[i].resize(compartments[i].getSeats().size(), true); // All seats are initially available
    }
}

Train TrainJourney::getTrain() {
    return train;
}

string TrainJourney::getDate() {
    return date;
}

bool TrainJourney::checkSeatValidity(int compartmentId, int seatId) {
    // Check if the compartment and seat exist
    if (compartmentId < 0 || compartmentId >= static_cast<int>(seatAvailability.size()) ||
        seatId < 0 || seatId >= static_cast<int>(seatAvailability[compartmentId].size())) {
        return false; // Invalid compartment or seat
    }
    return true;
}

bool TrainJourney::bookSeat(int compartmentId, int seatId) {
    if(!checkSeatValidity(compartmentId, seatId)) return false;

    // Check if the seat is available
    if (seatAvailability[compartmentId][seatId]) {
        seatAvailability[compartmentId][seatId] = false;
        return true; // Seat booked successfully
    }
    else {
        return false; // Seat is already taken
    }
}

bool TrainJourney::isSeatAvailable(int compartmentId, int seatId) {
    if(!checkSeatValidity(compartmentId, seatId)) return false;

    return seatAvailability[compartmentId][seatId]; // Check seat availability
}
