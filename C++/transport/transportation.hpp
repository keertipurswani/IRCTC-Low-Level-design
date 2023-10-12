#ifndef TRANSPORTATION_HPP
#define TRANSPORTATION_HPP

#include <string>

class Transportation {
public:
    virtual int getTransportNumber() const = 0;
    virtual std::string getTransportName() const = 0;
    virtual std::string getArrivalStation() const = 0;
    virtual std::string getDepartureStation() const = 0;
    virtual std::string getDate() const = 0;
    virtual std::string getTime() const = 0;
    virtual ~Transportation() = 0;

};

#endif // TRANSPORTATION_HPP
