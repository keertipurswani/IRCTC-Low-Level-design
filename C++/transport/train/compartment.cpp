#include "Compartment.hpp"

Compartment::Compartment(int id, CompartmentType type, int numberOfSeats)
    : compartmentId(id), compartmentType(type) {
    for (int i = 1; i <= numberOfSeats; ++i) {
        seats.push_back(Seat(i, SeatType::LOWER_BERTH)); // Initialize seats as lower berths
    }
}

int Compartment::getCompartmentId() const {
    return compartmentId;
}

CompartmentType Compartment::getCompartmentType() const {
    return compartmentType;
}

const vector<Seat>& Compartment::getSeats() const {
    return seats;
}
