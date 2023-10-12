#pragma once
#include "../common_include_files.hpp"

//Train and Bus can inherit from this for extensibility (OCP)
class Vehicle {
public:
    virtual int getTransportNumber() const = 0;
    virtual string getTransportName() const = 0;
    virtual string getArrivalStation() const = 0;
    virtual string getDepartureStation() const = 0;
    virtual string getDate() const = 0;
    virtual string getTime() const = 0;
    virtual ~Vehicle() = 0;

};
