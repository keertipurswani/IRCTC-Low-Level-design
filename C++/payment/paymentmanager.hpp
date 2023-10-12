#pragma once
#include "../common_include_files.hpp"
#include "../config/config.hpp"
#include "razorpay/razorpayfactory.hpp"
#include "phonepe/phonepefactory.hpp"
#include "creditcardpayment.hpp"
#include "netbankingpayment.hpp"
#include "upipayment.hpp"
#include "paymentabstractfactory.hpp"

class PaymentManager {
public:
    static PaymentManager& GetInstance();
    void Initialize();

    //these methods could have different signatures depending upon info it requires to process
    void ProcessPaymentWithNetbanking(double amount);
    void ProcessPaymentWithCreditcard(double amount);
    void ProcessPaymentWithUPI(double amount);
    void ResetPaymentSolution(const string& paymentProvider);

private:
    PaymentManager();
    PaymentManager(const PaymentManager&) = delete;
    PaymentManager& operator=(const PaymentManager&) = delete;

    PaymentFactory* paymentsolution;
    NetBankingPayment* netbanking;
    CreditCardPayment* creditcardpayment;
    UPIPayment* upipayment;
};
    