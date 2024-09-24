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
	switch (c) {
	case 1:
	
	break;
	case 2:
		
		break;

	case 3:
		
		break;
	default:
		invalid();
		break;

	}
	
}

	static void runApp() {
		File_Manager::getAllData();
		
			

		

	}
};


