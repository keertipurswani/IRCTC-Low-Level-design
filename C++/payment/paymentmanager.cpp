#include "paymentmanager.hpp"
#include "../config/config.hpp"

PaymentManager::PaymentManager() : paymentsolution(nullptr) {}

PaymentManager& PaymentManager::GetInstance() {
    static PaymentManager instance;
    return instance;
}

void PaymentManager::ResetPaymentSolution(const string& paymentProvider) {
    if (paymentProvider == "razorpay") {
        delete paymentsolution;
        paymentsolution = new RazorpayPaymentFactory();

    }
    else if (paymentProvider == "phonepe") {
        delete paymentsolution;
        paymentsolution = new PhonepePaymentFactory();

    }
    else {
        cout << "unknown payment provider . cannot reset ." << endl;
        return;
    }

    if (paymentsolution != nullptr) {
        paymentsolution = new RazorpayPaymentFactory();
        creditcardpayment = paymentsolution->CreateCreditCardPayment();
        netbanking = paymentsolution->CreateNetbankingPayment();
        upipayment = paymentsolution->CreateUPIPayment();
    }

}


void PaymentManager::Initialize() {
    //use config to initialize the payment solutions and methods
    ConfigReader& configreader =  ConfigReader::getInstance();
    auto configmap = configreader.GetConfigMap();
    auto sectionIter = configmap.find("payment");

    if (sectionIter != configmap.end()) {
        auto keyIterrazorpay = sectionIter->second.find("razorpay");
        auto keyIterphonepe = sectionIter->second.find("phonepe");

        if (keyIterrazorpay != sectionIter->second.end()) {
            bool value = keyIterrazorpay->second;
            if (value) {
                //similarly from the config check for each payment type and initialize
                paymentsolution = new RazorpayPaymentFactory();
                creditcardpayment =  paymentsolution->CreateCreditCardPayment();
                netbanking = paymentsolution->CreateNetbankingPayment();
                upipayment = paymentsolution->CreateUPIPayment();
            }
        }
        else if (keyIterphonepe != sectionIter->second.end()) {
            bool value = keyIterphonepe->second;
            if (value) {
                //similarly from the config check for each payment type and initialize
                paymentsolution = new PhonepePaymentFactory();
                creditcardpayment = paymentsolution->CreateCreditCardPayment();
                netbanking = paymentsolution->CreateNetbankingPayment();
                upipayment = paymentsolution->CreateUPIPayment();
            }

        }
        else {
            cout << "unknown payment solution . please check" << endl;
        }
    }
    else {
        cout << "config initialization failed" << endl;
    }
   
}

void PaymentManager::ProcessPaymentWithNetbanking(double amount) {
    netbanking->ProcessNetBankingPayment(amount);
}
void PaymentManager::ProcessPaymentWithCreditcard(double amount) {
    creditcardpayment->ProcessCreditCardPayment(amount);
}
void PaymentManager::ProcessPaymentWithUPI(double amount) {
    upipayment->ProcessUPIPayment(amount);
}
