#include <iostream>
#include "transportmanager.hpp"


using namespace std;

int main() {
	cout << "---------welcome to irctc system----------" << endl;
	TransportManager& tinstance = TransportManager::getInstance();
	tinstance.login();

	cout << endl<< "Enter 1 to search 2 to view history" << endl;
	string whattodo;
	cin >> whattodo;

	/*
	* TAKE CARE OF WHAT TO DO(SEARCH/VIEW HISTORY) AFTER LOGIN
	*/
	if (whattodo == "1") {
		cout << "SEARCH INITIATED..." << endl;

	}
	else if(whattodo == "2") {
		cout << "VIEW HISTORY INITIATED..." << endl;
	}



	return 0;
}
