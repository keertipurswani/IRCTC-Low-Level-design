#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "Compartment.hpp"
#include <string>
#include <vector>

class Train {
public:
    Train(int number, const std::string& id, const std::string& name);

    void addStation(const std::string& station, const std::string& arrivalTime);
    void addCompartment(int id, CompartmentType type, int numberOfSeats);

    int getTrainNumber() const;
    const std::string& getTrainId() const;
    const std::string& getTrainName() const;

    const std::vector<std::string>& getStations() const;
    const std::vector<std::string>& getArrivalTimes() const;
    const std::vector<Compartment>& getCompartments() const;

private:
    int trainNumber;
    std::string trainId;
    std::string trainName;
    std::vector<std::string> stations;
    std::vector<std::string> arrivalTimes;
    std::vector<Compartment> compartments;
};

#endif // TRAIN_HPP
