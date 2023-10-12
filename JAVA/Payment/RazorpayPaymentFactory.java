public class RazorpayPaymentFactory extends PaymentFactory {
    @Override
    public NetBankingPayment CreateNetbankingPayment() {
        return new RazorpayNetbankingPayment();
    }

    @Override
    public CreditCardPayment CreateCreditCardPayment() {
        return new RazorpayCreditCardPayment();
    }

    @Override
    public UPIPayment CreateUPIPayment() {
        return new RazorpayUPIPayment();
    }
}
