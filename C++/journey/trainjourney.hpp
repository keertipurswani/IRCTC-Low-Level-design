#ifndef TRAIN_JOURNEY_HPP
#define TRAIN_JOURNEY_HPP

#include <string>
#include <vector>
#include "../transport/train/train.hpp"

class TrainJourney {
public:
    TrainJourney(const Train& train, const std::string& date);

    const Train& getTrain() const;
    const std::string& getDate() const;
    bool bookSeat(int compartmentId, int seatId);
    bool isSeatAvailable(int compartmentId, int seatId) const;

private:
    const Train& train;
    std::string date;
    std::vector<std::vector<bool>> seatAvailability; // 2D array to track seat availability
};

#endif // TRAIN_JOURNEY_HPP
