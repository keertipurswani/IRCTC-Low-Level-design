#include "Seat.hpp"

Seat::Seat(int id, SeatType type) : seatId(id), seatType(type), isAvailable(true) {}

int Seat::getSeatId() const {
    return seatId;
}

SeatType Seat::getSeatType() const {
    return seatType;
}

bool Seat::isSeatAvailable() const {
    return isAvailable;
}

void Seat::bookSeat() {
    isAvailable = false;
}
