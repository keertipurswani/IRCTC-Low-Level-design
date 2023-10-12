#include "thirdpartystrategy.hpp"

User* ThirdPartyStrategy::login() {
    // Implement 3rd party login logic here
    return new NormalUser("normal user"); // Replace with actual logic
}

string ThirdPartyStrategy::getName() {
    return "3rd Party";
}
