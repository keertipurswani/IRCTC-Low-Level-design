#pragma once
#include <vector>
#include "../transport/train/train.hpp" 

class TrainTransportDatabase {
private:
    vector<Train*> trainRecords;
    //Implement Singleton - Double Checked Locking should be there
    TrainTransportDatabase();

public:
    static TrainTransportDatabase& getInstance();
    //The parameters should be wrapped in another class
    //This is not a good way of writing code (have done only for demo)
    void addTransport(int trainNumber, const string trainName, string trainId, vector<string> stations, vector<string> arrivaltime, vector<int> distance, vector<int> traveldays);
    void searchTransport(const string& from, const string& to, const string& date);
};
