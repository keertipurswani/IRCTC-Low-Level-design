#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "Compartment.hpp"
#include <string>
#include <vector>
#include "../../common_include_files.hpp"

class Train {
public:
    Train(int number, string id, string name);
    Train(int number, string id, string name,
        vector<string> stations, vector<string> arrivalTimes, vector<int> daysofweek, int numofcompartments);

    void addStation(string station, string arrivalTime);
    void addCompartment(int id, CompartmentType type, int numberOfSeats);

    int getTrainNumber();
    string getTrainId();
    string getTrainName();

    vector<string> getStations();
    vector<string> getArrivalTimes();
    vector<Compartment> getCompartments();

private:
    int trainNumber;
    string trainId;
    string trainName;
    vector<string> stations;
    vector<string> arrivalTimes;
    int numCompartments;
    vector<Compartment> compartments;
    vector<int>         distancefromorigin;  //{0, 70, 120, 180...}
    vector<int>         traveldays; // which days of week this train runs e.g. 0-sunday , 1-monday and so on

};

#endif // TRAIN_HPP
