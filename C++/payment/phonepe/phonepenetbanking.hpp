// Concrete credit card payment for phonepe
#include "../netbankingpayment.hpp"

class PhonepeNetbankingPayment : public NetBankingPayment {
public:
    void ProcessNetBankingPayment(double amount) {
        cout << "Using phone pe net banking payment" << endl;
    }
};