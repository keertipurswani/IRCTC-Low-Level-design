// Concrete credit card payment for phonepe

#pragma once 
#include "../netbankingpayment.hpp"
class RazorpayNetbankingPayment : public NetBankingPayment {
public:
    void ProcessNetBankingPayment(double amount) {
        cout << "Using razor pay net banking payment" << endl;
    }
};