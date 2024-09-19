#pragma once
#include <fstream>
#include"Employee.h"
#include"Admin.h"
#include"Client.h"
#include"DataSourceInterface.h"
#include"Person.h"
#include"FileHelper.h"


class FileManager : public DataSourceInterface {
private:
	static void addClient(Client client) {
		FileHelper::saveClient(client);
	}
	static void addEmployee(Employee employee) {
		FileHelper::saveEmployee(Employee
	}
	static void addAdmin(Admin admin) {
		FileHelper::saveEmployee("Admins.txt", "AdminLastId.txt", admin);
	}
	static void getAllClients() {
		FileHelper::getClients();
	}
	static void getAllEmployees() {
		FileHelper::getEmployees();
	}
	static void getAllAdmins() {
		FileHelper::getAdmins();
	}
	static void removeAllClients() {
		FileHelper::clearFile("Clients.txt", "ClientLastId.txt");
	}
	static void removeAllEmployees() {
		FileHelper::clearFile("Employees.txt", "EmployeeLastId.txt");
	}
	static void removeAllAdmins() {
		FileHelper::clearFile("Admins.txt", "AdminLastId.txt");
	}
public:
	static void getAllData() {
		getAllClients();
		getAllEmployees();
		getAllAdmins();
	}
	static void updateClients() {
		removeAllClients();
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++)
			addClient(*clIt);
	}
	static void updateEmployees() {
		removeAllEmployees();
		for (clIt = allEmployees.begin(); eIt != allEmplyees.end(); elIt++)
			addEmployees(*eIt);
	}
	static void updateAdmins() {
		removeAllAdmins();
		for (clIt = allAdmins.begin(); aIt != allClients.end(); aIt++)
			addClient(*aIt);
	}
};
