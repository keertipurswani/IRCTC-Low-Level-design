#ifndef SEAT_HPP
#define SEAT_HPP

enum class SeatType {
    SIDE_LOWER,
    SIDE_UPPER,
    LOWER_BERTH,
    MIDDLE_BERTH,
    UPPER_BERTH
};

class Seat {
public:
    Seat(int id, SeatType type);

    int getSeatId() const;
    SeatType getSeatType() const;
    bool isSeatAvailable() const;
    void bookSeat();

private:
    int seatId;
    SeatType seatType;
    bool isAvailable;
};

#endif // SEAT_HPP
