#include "train.hpp"
#include "compartment.hpp" 

Train::Train(int number, string id, string name)
	: trainNumber(number), trainId(id), trainName(name) {
}

//In real scenarios, we should create wrapper and not pass everything in parameters
//As you can see, this code is not readable!
Train::Train(int number, string id, string name,
	vector<string> stations, vector<string> arrivalTimes, vector<int> daysofweek, int numofcompartments)
	: trainNumber(number), trainId(id), trainName(name), stations(stations), arrivalTimes(arrivalTimes), traveldays(daysofweek), numCompartments(numofcompartments)
{
	 // Create compartments and insert them into the vector<Compartment>
	for (int i = 1; i <= numofcompartments; ++i) {
		// can customize the id, type, and number of seats as needed
		int compartmentId = i;
		CompartmentType compartmentType = SECOND_TIER;  // You can change this as needed
		int numberOfSeats = 64;  // You can change this as needed

		Compartment compartment(compartmentId, compartmentType, numberOfSeats);
		compartments.push_back(compartment);
	}
}

void Train::addStation(string station, string arrivalTime) {
	stations.push_back(station);
	arrivalTimes.push_back(arrivalTime);
}

void Train::addCompartment(int id, CompartmentType type, int numberOfSeats) {
	Compartment compartment(id, type, numberOfSeats);
	compartments.push_back(compartment);
}

int Train::getTrainNumber() {
	return trainNumber;
}

string Train::getTrainId() {
	return trainId;
}

string Train::getTrainName() {
	return trainName;
}

vector<string> Train::getStations() {
	return stations;
}

vector<string> Train::getArrivalTimes() {
	return arrivalTimes;
}

vector<Compartment> Train::getCompartments() {
	return compartments;
}