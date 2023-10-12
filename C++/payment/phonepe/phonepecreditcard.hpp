// Concrete credit card payment for phonepe
#include "../creditcardpayment.hpp"

class PhonpeCreditCardPayment : public CreditCardPayment {
public:
    void ProcessCreditCardPayment(double amount) {
        cout << "Using phone pe credit card payment" << endl;
    }
};