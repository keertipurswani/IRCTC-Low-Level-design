// Concrete credit card payment for phonepe
#include "../upipayment.hpp"

class PhonepeUPIPayment : public UPIPayment {
public:
    void ProcessUPIPayment(double amount) {
        cout << "Using phone pe UPI Payment" << endl;
    }
};