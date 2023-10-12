public class RazorpayNetbankingPayment extends NetBankingPayment {
    @Override
    public void ProcessNetBankingPayment(double amount) {
        System.out.println("Using Razorpay net banking payment");
    }
}
