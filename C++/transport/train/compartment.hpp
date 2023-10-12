#pragma once
#include "Seat.hpp"
#include "../common_include_files.hpp"

enum  CompartmentType {
    AC,
    GENERAL,
    THREE_TIER,
    SECOND_TIER,
    FIRST_CLASS
};

class Compartment {
public:
    Compartment(int id, CompartmentType type, int numberOfSeats);

    int getCompartmentId() const;
    CompartmentType getCompartmentType() const;
    const vector<Seat>& getSeats() const;

private:
    int compartmentId;
    CompartmentType compartmentType;
    vector<Seat> seats;
};
