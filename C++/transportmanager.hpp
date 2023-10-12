#ifndef TRANSPORTMANAGER_HPP
#define TRANSPORTMANAGER_HPP

#include <iostream>
#include "user/user.hpp"

class TransportManager {
public:
    static TransportManager& getInstance();

    void searchTransport(const string& source, const string& destination);
    void bookTransport(const string& transportType);
    User* login();

private:
    TransportManager();
    TransportManager(const TransportManager&) = delete;
    TransportManager& operator=(const TransportManager&) = delete;
    ~TransportManager();
};

#endif // TRANSPORTMANAGER_HPP
