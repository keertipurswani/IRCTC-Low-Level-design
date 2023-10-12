// Concrete Factory for razorpay 

#pragma once 

#include "../paymentabstractfactory.hpp"
#include "razorpaycreditcard.hpp"
#include "razorpaynetbanking.hpp"
#include "razorpayupi.hpp"

class RazorpayPaymentFactory : public PaymentFactory {
public:
    virtual NetBankingPayment* CreateNetbankingPayment() {
        return new RazorpayNetbankingPayment();

    }
    virtual CreditCardPayment* CreateCreditCardPayment() {
        return new RazorpayCreditCardPayment();

    }
    virtual UPIPayment* CreateUPIPayment() {
        return new RazorpayUPIPayment();

    }
};