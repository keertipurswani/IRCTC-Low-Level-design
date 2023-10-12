#include "Train.hpp"
#include "../../common_include_files.hpp"

Train::Train(int number, const std::string& id, const std::string& name)
    : trainNumber(number), trainId(id), trainName(name) {}

void Train::addStation(const std::string& station, const std::string& arrivalTime) {
    stations.push_back(station);
    arrivalTimes.push_back(arrivalTime);
}

void Train::addCompartment(int id, CompartmentType type, int numberOfSeats) {
    compartments.push_back(Compartment(id, type, numberOfSeats));
}

int Train::getTrainNumber() const {
    return trainNumber;
}

const std::string& Train::getTrainId() const {
    return trainId;
}

const std::string& Train::getTrainName() const {
    return trainName;
}

const std::vector<std::string>& Train::getStations() const {
    return stations;
}

const std::vector<std::string>& Train::getArrivalTimes() const {
    return arrivalTimes;
}

const std::vector<Compartment>& Train::getCompartments() const {
    return compartments;
}
