// Abstract NetBanking Payment payment
#pragma once 

class NetBankingPayment {
public:
    virtual void ProcessNetBankingPayment(double amount) = 0;
};