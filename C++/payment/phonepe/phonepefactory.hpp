// Concrete Factory for phonepe 
#include "../paymentabstractfactory.hpp"
#include "phonepenetbanking.hpp"
#include "phonepeupi.hpp"
#include "phonepecreditcard.hpp"

class PhonepePaymentFactory : public PaymentFactory {
public:
    virtual NetBankingPayment* CreateNetbankingPayment() {
        return new PhonepeNetbankingPayment();

    }
    virtual CreditCardPayment* CreateCreditCardPayment() {
        return new PhonpeCreditCardPayment();

    }
    virtual UPIPayment* CreateUPIPayment() {
        return new PhonepeUPIPayment();

    }
};