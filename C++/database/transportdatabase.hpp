// Abstract TransportDatabase class

#ifndef TRANSPORT_DATABASE_HPP
#define TRANSPORT_DATABASE_HPP

#include "../common_include_files.hpp"

class TransportDatabase {
public:
    virtual void addTransport(const std::string& from, const std::string& to, const std::string& date) = 0;
    virtual void searchTransport(const std::string& from, const std::string& to, const std::string& date) = 0;
};

#endif