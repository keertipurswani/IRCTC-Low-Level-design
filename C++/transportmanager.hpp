#ifndef TRANSPORTMANAGER_HPP
#define TRANSPORTMANAGER_HPP

#include <iostream>

class TransportManager {
public:
    static TransportManager& getInstance();

    void searchTransport(const std::string& source, const std::string& destination);
    void bookTransport(const std::string& transportType);
    bool login();

private:
    TransportManager();
    TransportManager(const TransportManager&) = delete;
    TransportManager& operator=(const TransportManager&) = delete;
    ~TransportManager();
};

#endif // TRANSPORTMANAGER_HPP
