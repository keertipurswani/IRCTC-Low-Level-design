#ifndef COMPARTMENT_HPP
#define COMPARTMENT_HPP

#include "Seat.hpp"
#include <vector>

enum class CompartmentType {
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
    const std::vector<Seat>& getSeats() const;

private:
    int compartmentId;
    CompartmentType compartmentType;
    std::vector<Seat> seats;
};

#endif // COMPARTMENT_HPP
