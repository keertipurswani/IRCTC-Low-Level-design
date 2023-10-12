public class RazorpayCreditCardPayment extends CreditCardPayment {
    @Override
    public void ProcessCreditCardPayment(double amount) {
        System.out.println("Using Razorpay credit card payment");
    }
}
