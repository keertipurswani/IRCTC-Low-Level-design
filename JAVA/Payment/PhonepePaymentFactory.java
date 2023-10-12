public class PhonepePaymentFactory extends PaymentFactory {
    @Override
    public NetBankingPayment CreateNetbankingPayment() {
        return new PhonepeNetbankingPayment();
    }

    @Override
    public CreditCardPayment CreateCreditCardPayment() {
        return new PhonepeCreditCardPayment();
    }

    @Override
    public UPIPayment CreateUPIPayment() {
        return new PhonepeUPIPayment();
    }
}
