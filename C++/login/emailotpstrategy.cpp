#include "emailotpstrategy.hpp"
#include "../user/normaluser.hpp"

User* EmailOtpStrategy::login() {
    // Implement email/OTP login logic here
    return new NormalUser("normal user"); // Replace with actual logic
}

string EmailOtpStrategy::getName() {
    return "Email/OTP";
}
