import java.util.Scanner;

public class UsernamePasswordStrategy implements LoginStrategy {
    @Override
    public boolean login() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter username: ");
        String username = scanner.next();
        System.out.println();

        System.out.print("Enter password: ");
        String password = scanner.next();
        System.out.println();
        
        // Replace this with your actual logic to check the username and password
        // against your user module
        // For this example, we'll assume the login is always successful
        return true;
    }

    @Override
    public String getName() {
        return "Username/Password";
    }
}
