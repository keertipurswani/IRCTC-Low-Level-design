public class LoginManager {
    private LoginStrategy strategy;

    public LoginManager() {
        this.strategy = null;
    }

    public boolean performLogin() {
        System.out.println("Attempting " + strategy.getName() + " login...");
        boolean loginSuccess = strategy.login();
        if (loginSuccess) {
            System.out.println("Login successful!");
        } else {
            System.out.println("Login failed.");
        }
        return loginSuccess;
    }

    public void setLoginStrategy(int loginStrategy) {
        if (loginStrategy == LoginStrategyEnum.USERNAME_PASSWORD.ordinal()) {
            strategy = new UsernamePasswordStrategy();
        } else if (loginStrategy == LoginStrategyEnum.EMAIL_OTP.ordinal()) {
            strategy = new EmailOtpStrategy();
        } else if (loginStrategy == LoginStrategyEnum.THIRD_PARTY.ordinal()) {
            strategy = new ThirdPartyStrategy();
        }
    }

    public void displayLoginMethods() {
        // Implement the method to display login methods as needed
    }
}
