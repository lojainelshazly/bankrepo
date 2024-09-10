#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Client.h"
#include"Admin.h"
#include"Employee.h"
#include"Datasourceinterface.h"
using namespace std;
class File_Manager :public Datasourceinterface
{
	
	string file1 = "client.txt";
	string file2 = "employee.txt";
	string file3 = "admins.txt";
	

	

	void addclient(Client& client) {
		Client c;
		fstream file(file1, ios::app);
		file << c.getName()<<c.getId()<<c.getPassword()<<endl;
		file.close();
	}
	Employee e;
	void addemployee(Employee& employee) {
		fstream file(file2, ios::app);
		file <<e.getName()<<e.getId()<<e.getPassword()<<endl ;
		file.close();
	}
	Admin a;
	void addadmin(Admin& admin) {
		fstream file(file3, ios::app);
		file << a.getName() << a.getId() << a.getPassword() << endl; ;
		file.close();
	}
//=========
	vector<Client>getAllClients;
	vector<Employee>getAllEmployees;
	vector<Admin>getAllAdmins;
//==================
	void removeallclients() {
		ofstream file1(file1, ios::trunc);

	}

	void removeallemployee() {
		ofstream file2(file2, ios::trunc);

	}
	void removealladmins() {
		ofstream file1(file3, ios::trunc);
		
	}





};
