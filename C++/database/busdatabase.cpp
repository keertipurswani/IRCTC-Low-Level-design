// Concrete BusTransportDatabase class
#include "transportdatabase.hpp"
class BusTransportDatabase : public TransportDatabase {
private:
    std::vector<std::string> busRecords;

public:
    void addTransport(const std::string& from, const std::string& to, const std::string& date) override {
        std::string record = "Bus: From " + from + " To " + to + " Date " + date;
        busRecords.push_back(record);
    }

    void searchTransport(const std::string& from, const std::string& to, const std::string& date) override {
        std::cout << "Searching for Bus Transport from " << from << " to " << to << " on " << date << ":" << std::endl;
        for (const std::string& record : busRecords) {
            if (record.find(from) != std::string::npos && record.find(to) != std::string::npos && record.find(date) != std::string::npos) {
                std::cout << record << std::endl;
            }
        }
    }
};