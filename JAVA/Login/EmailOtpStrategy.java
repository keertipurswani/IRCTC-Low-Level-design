public class EmailOtpStrategy implements LoginStrategy {
    @Override
    public boolean login() {
        // Implement email/OTP login logic here
        // Return true if the login is successful, replace with actual logic
        return true;
    }

    @Override
    public String getName() {
        return "Email/OTP";
    }
}
