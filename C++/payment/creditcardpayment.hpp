
// Abstract credit card payment

#pragma once
class CreditCardPayment {
public:
    virtual void ProcessCreditCardPayment(double amount) = 0;
};