// Concrete credit card payment for phonepe

#pragma once

#include "../upipayment.hpp"
class RazorpayUPIPayment : public UPIPayment {
public:
    void ProcessUPIPayment(double amount) {
        cout << "Using razor pay UPI Payment" << endl;
    }
};