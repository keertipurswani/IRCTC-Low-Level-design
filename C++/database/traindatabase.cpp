// Concrete TrainTransportDatabase class
#include "transportdatabase.hpp"
#include "../transport/train/train.hpp"
class TrainTransportDatabase : public TransportDatabase {
private:
    std::vector<Train*> trainRecords;

public:
    void addTransport(int trainNumber, const std::string& trainName, vector<string> stations,
        const std::string& starttime) override {

        Train* train = new Train(12345, 1, "shatabdi express");
        trainRecords.push_back(train);
    }

    void searchTransport(const std::string& from, const std::string& to, const std::string& date) override {
        std::cout << "Searching for Train Transport from " << from << " to " << to << " on " << date << ":" << std::endl;
        for (Train* record : trainRecords) {
            if (record.find(from) != std::string::npos && record.find(to) != std::string::npos && record.find(date) != std::string::npos) {
                std::cout << record << std::endl;
            }
        }
    }
};