#include "../common_include_files.hpp"
#include "transportdatabase.hpp"

class TransportFactory {
public:
   static TransportDatabase* GetTransportDatabase(string type) {
        if (type == "train") {
            return new TrainDatabase();
        }
        else if (type == "bus") {
            return new BusDatabase();
        }
        else {
            cout << "Unsupported Type. Please check" << endl;
            return nullptr;
        }

    }
};