//// Concrete BusTransportDatabase class
//#include "transportdatabase.hpp"
//class BusTransportDatabase : public TransportDatabase {
//private:
//    vector<string> busRecords;
//
//public:
//    void addTransport(const string& from, const string& to, const string& date) override {
//        string record = "Bus: From " + from + " To " + to + " Date " + date;
//        busRecords.push_back(record);
//    }
//
//    void searchTransport(const string& from, const string& to, const string& date) override {
//        cout << "Searching for Bus Transport from " << from << " to " << to << " on " << date << ":" << endl;
//        for (const string& record : busRecords) {
//            if (record.find(from) != string::npos && record.find(to) != string::npos && record.find(date) != string::npos) {
//                cout << record << endl;
//            }
//        }
//    }
//};