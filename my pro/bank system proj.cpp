// bank system proj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "Admin.h"
#include "Employee.h"
#include "Client.h"
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
	////////////////////////////////////
	 Client* c = new Client("1254542", "vip", 69000, 14758, "Ahmwd");
    Client* c2 = new Client("25415657", "reg", 7500, 14758, "shawky");
    Employee* e =new Employee();
    Employee* e1 = new Employee(15784,"Fareshh","kjdhbxxjsv",6500);
    e->setName("Ahmed");
    e->setId(1234);
    e->setPassword("123456789");
    e->setSalary(5500);
    e->displayInfo();
    e1->displayInfo();
    e->addClient(*c);
    e->addClient(*c2);
    e->getAllClient();
    Admin* s1 = Admin::get_instance(10);
    s1->PrintUniqueID();
    std::cout << "memory location: " << s1 << std::endl;

    s1->setName("Ahmed2");
    s1->setId(1235);
    s1->setPassword("123456789");
    s1->setSalary(6000);
 
    s1->addEmployee(*e);
    s1->addEmployee(*e1);
    s1->addNewEmployee(11111, "Ashour", "lksnddjdc");
    s1->addNewEmployee(111115, "Ashour2", "lksnddjdc");
    s1->getAllEmployees();
}

