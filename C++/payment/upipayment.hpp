#pragma once
class UPIPayment {
public:
    virtual void ProcessUPIPayment(double amount) = 0;
};