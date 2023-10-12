#include "../common_include_files.hpp"
#include "traindatabase.hpp"

// Define the static instance of the singleton
TrainTransportDatabase& TrainTransportDatabase::getInstance() {
    static TrainTransportDatabase instance;
    return instance;
}

// Private constructor
TrainTransportDatabase::TrainTransportDatabase() {
    // Initialize any private members here
}

void TrainTransportDatabase::addTransport(int trainNumber, const string trainName, string trainId, vector<string> stations,vector<string> arrivaltime, vector<int> distance, vector<int> traveldays) {
    // Implement the addTransport method as needed to add a Train to the database
    // You can create a Train object and add it to the trainRecords vector here
}

void TrainTransportDatabase::searchTransport(const string& from, const string& to, const string& date) {
    // Implement the searchTransport method to search for trains based on from, to, and date
    // You can iterate through trainRecords and perform the search here
}
