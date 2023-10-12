// Concrete credit card payment for razorpay
#include "../creditcardpayment.hpp"

class RazorpayCreditCardPayment : public CreditCardPayment {
public:
    void ProcessCreditCardPayment(double amount) {
        cout << "Using razor pay credit card payment" << endl;
    }
};