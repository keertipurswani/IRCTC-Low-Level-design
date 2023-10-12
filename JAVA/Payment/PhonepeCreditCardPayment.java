public class PhonepeCreditCardPayment extends CreditCardPayment {
    @Override
    public void ProcessCreditCardPayment(double amount) {
        System.out.println("Using Phonepe credit card payment");
    }
}
