#include "admin.hpp"
#include "../database/traindatabase.hpp"

Admin::Admin(const string& username) : User(username, "Admin") {}

void Admin::login() {
	cout << "Admin login successful. Welcome, " << getUsername() << "!" << endl;
}

void Admin::displayMenu() {
	cout << "Admin Menu:" << endl;
	cout << "1. Add Train" << endl;
	cout << "2. Display Trains" << endl;

	int whattodo;
	cin >> whattodo;

	if (whattodo == 1) {
		// read data from csv file and add transport
		readDataFromFileAndAddToDB();
	}
	else if (whattodo == 2) {

	}
}

void Admin::readDataFromFileAndAddToDB() {
	// Open the CSV file for reading
	ifstream file("data/trains.csv");
	TrainTransportDatabase traindb = TrainTransportDatabase::getInstance();

	if (!file.is_open()) {
		cout << "Error: Unable to open the CSV file." << endl;
		return;
	}

	string line;
	getline(file, line);  // Read and discard the header line

	while (getline(file, line)) {
		istringstream iss(line);
		string token;

		// Parse the CSV line and store data in variables
		int trainNumber;
		string trainName, trainId;
		vector<string> stations, arrivalTimes;
		vector<int> distances, travelDays;

		getline(iss, token, ',');
		trainNumber = stoi(token);

		getline(iss, trainName, ',');
		getline(iss, trainId, ',');

		string stationsCSV, arrivalTimesCSV, distancesCSV, travelDaysCSV;
		getline(iss, stationsCSV, ',');
		getline(iss, arrivalTimesCSV, ',');
		getline(iss, distancesCSV, ',');
		getline(iss, travelDaysCSV, ',');

		istringstream stationsStream(stationsCSV);
		while (getline(stationsStream, token, ',')) {
			stations.push_back(token);
		}

		istringstream arrivalTimesStream(arrivalTimesCSV);
		while (getline(arrivalTimesStream, token, ',')) {
			arrivalTimes.push_back(token);
		}

		istringstream distancesStream(distancesCSV);
		while (getline(distancesStream, token, ',')) {
			distances.push_back(stoi(token));
		}

		istringstream travelDaysStream(travelDaysCSV);
		while (getline(travelDaysStream, token, ',')) {
			travelDays.push_back(stoi(token));
		}
		traindb.addTransport(trainNumber, trainName, trainId, stations, arrivalTimes, distances, travelDays);

	}

	file.close();

}

void Admin::addTrain(Train& train) {
	trains.push_back(train);
}

void Admin::displayTrains(const string& departureStation, const string& arrivalStation,
	const string& date) const {

	/* cout << "Trains for Date: " << date << " from " << departureStation << " to " << arrivalStation << ":" << endl;
	 for (const Train& train : trains) {
		 if (train.getDepartureStation() == departureStation && train.getArrivalStation() == arrivalStation) {
			 cout << "Train Number: " << train.getTrainNumber() << endl;
			 cout << "Train Name: " << train.getTrainName() << endl;
			 cout << "Departure Time: " << train.getDepartureTime() << endl;
			 cout << "Arrival Time: " << train.getArrivalTime() << endl;
			 cout << endl;
		 }
	 }*/
}