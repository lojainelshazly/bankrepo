#pragma once
#include<iostream>

using namespace std;

class Screens
{
	static void loginOptions() {
		cout << "1- login as an admin" << endl;
		cout << "2- login as an Employee" << endl;
		cout << "3- login as a client" << endl;
		cout << "4- exit" << endl;

	}
	static int loginAs(){
		int choice;
		cout << "enter your choice" << endl << "1- admin" << endl << "2-employee"
			<< "3-client" << endl;
		cin >> choice;
		return choice;
	}
	static void invalid(int c) {
		cout << "invalid choice please try again" << endl;
	}
	static void logout() {
		cout << "you have logged out" << endl;
	}


	static void loginscreen(int c) {
		if (c == 1) {
			cout << "Admin login" << endl;

		}
		else if (c==2) {
			cout << "employee login" << endl;

		}
		else if (c == 3) {
			cout << "client login" << endl;

		}
		else {
			cout << "invalid please try again" << endl;
		}
		
	}
};

static void runApp() {
	

}