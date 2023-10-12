import java.util.*;
import config.ConfigReader;

public class PaymentManager {
    private static PaymentManager instance;
    private PaymentFactory paymentsolution;
    private NetBankingPayment netbanking;
    private CreditCardPayment creditcardpayment;
    private UPIPayment upipayment;

    private PaymentManager() {
        paymentsolution = null;
    }

    public static PaymentManager GetInstance() {
        if (instance == null) {
            instance = new PaymentManager();
        }
        return instance;
    }

    public void ResetPaymentSolution(String paymentProvider) {
        if (paymentProvider.equals("razorpay")) {
            paymentsolution = new RazorpayPaymentFactory();
        } else if (paymentProvider.equals("phonepe")) {
            paymentsolution = new PhonepePaymentFactory();
        } else {
            System.out.println("Unknown payment provider. Cannot reset.");
            return;
        }

        if (paymentsolution != null) {
            creditcardpayment = paymentsolution.CreateCreditCardPayment();
            netbanking = paymentsolution.CreateNetbankingPayment();
            upipayment = paymentsolution.CreateUPIPayment();
        }
    }

    public void Initialize() {
        // Use config to initialize the payment solutions and methods
        ConfigReader configreader = ConfigReader.getInstance();
        Map<String, Map<String, Boolean>> configmap = configreader.GetConfigMap();
        Map<String, Boolean> section = configmap.get("payment");

        if (section != null) {
            Boolean useRazorpay = section.get("razorpay");
            Boolean usePhonepe = section.get("phonepe");

            if (useRazorpay != null && useRazorpay) {
                paymentsolution = new RazorpayPaymentFactory();
                creditcardpayment = paymentsolution.CreateCreditCardPayment();
                netbanking = paymentsolution.CreateNetbankingPayment();
                upipayment = paymentsolution.CreateUPIPayment();
            } else if (usePhonepe != null && usePhonepe) {
                paymentsolution = new PhonepePaymentFactory();
                creditcardpayment = paymentsolution.CreateCreditCardPayment();
                netbanking = paymentsolution.CreateNetbankingPayment();
                upipayment = paymentsolution.CreateUPIPayment();
            } else {
                System.out.println("Unknown payment solution. Please check.");
            }
        } else {
            System.out.println("Config initialization failed.");
        }
    }

    public void ProcessPaymentWithNetbanking(double amount) {
        netbanking.ProcessNetBankingPayment(amount);
    }

    public void ProcessPaymentWithCreditcard(double amount) {
        creditcardpayment.ProcessCreditCardPayment(amount);
    }

    public void ProcessPaymentWithUPI(double amount) {
        upipayment.ProcessUPIPayment(amount);
    }
}
