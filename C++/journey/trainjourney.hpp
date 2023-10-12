#pragma once
#include "../common_include_files.hpp"
#include "../transport/train/train.hpp"

class TrainJourney {
    const Train& train;
    string date;
    //Rows - Compartments
    //Columns - Seats in the compartment
    vector<vector<bool>> seatAvailability;  
public:
    TrainJourney(Train train, string date);
    Train getTrain();
    string getDate();
    bool bookSeat(int compartmentId, int seatId);
    bool isSeatAvailable(int compartmentId, int seatId);
    bool checkSeatValidity(int compartmentId, int seatId);
};
