public class ThirdPartyStrategy implements LoginStrategy {
    @Override
    public boolean login() {
        // Implement 3rd party login logic here
        // Return true if the login is successful, replace with actual logic
        return true;
    }

    @Override
    public String getName() {
        return "3rd Party";
    }
}
