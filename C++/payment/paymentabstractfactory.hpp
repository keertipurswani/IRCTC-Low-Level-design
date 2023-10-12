// Abstract Factory: Payment Factory
#pragma once
#include "netbankingpayment.hpp"
#include "creditcardpayment.hpp"
#include "upipayment.hpp"

class PaymentFactory {
public:
    virtual NetBankingPayment* CreateNetbankingPayment() = 0;
    virtual CreditCardPayment* CreateCreditCardPayment() = 0;
    virtual UPIPayment*        CreateUPIPayment() = 0;
};