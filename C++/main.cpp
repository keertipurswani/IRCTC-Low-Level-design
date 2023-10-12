#include <iostream>
#include "transportmanager.hpp"
#include "user/user.hpp"


using namespace std;

int main() {
	cout << "---------welcome to irctc system----------" << endl;
	TransportManager& tinstance = TransportManager::getInstance();
	//tinstance.initialize();  //could initialize  the system such as databsaes , config files etc.

	User* user = tinstance.login();
	if (user == nullptr) {
		cout << "could not login. Try again" << endl;
	}

	user->displayMenu();

	/*
	* TAKE CARE OF WHAT TO DO(SEARCH/VIEW HISTORY) AFTER LOGIN
	*/


	return 0;
}
