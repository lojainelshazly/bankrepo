// bank system proj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;
void display(){
	cout << "*********************" << endl;
	cout << "CIB Bank" << endl;
	cout << "*********************" << endl;
	cout << "Hello Dear" << endl;
	cout << "Menue" << endl;
	cout << "1-        " << endl;
	cout << "2-        " << endl;
	cout << "3-        " << endl;
	cout << "4-        " << endl;


}


int main()
{
	display();
	ofstream file1("clients.txt");
	file1 << "this is the clients file:";
	/* ifstream file1("clients.txt");*/

	ofstream file2("employees.txt");
	file2 << "this is the employees file:";
	/* ifstream file2("employees.txt");*/

	ofstream file3("admins.txt");
	file3 << "this is admins file";
	/* ifstream file3("admins.txt");*/
	file1.close();
	file2.close();
	file3.close();
	system("pause");
}

