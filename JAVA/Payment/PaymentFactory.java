public abstract class PaymentFactory {
    public abstract NetBankingPayment CreateNetbankingPayment();
    public abstract CreditCardPayment CreateCreditCardPayment();
    public abstract UPIPayment CreateUPIPayment();
}
