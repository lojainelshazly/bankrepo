#pragma once
#include<iostream>
using namespace std;
#include "Employee.h"
class Admin : public Employee {
private:
    vector <Employee> Employees;

    static Admin* one_and_only_instance;
    static int unique_id;
    Admin(const int num) {
        unique_id = num;
    }


public:
    static Admin* get_instance(const int num) {
        if (one_and_only_instance == nullptr) {
            std::cout << "creating a new instance" << std::endl;
            one_and_only_instance = new Admin(num);
        }
        std::cout << "returning instance with unique id: " << unique_id << std::endl;
        return one_and_only_instance;
    }

    void operator=(const Admin&) = delete;
    Admin(Admin& other) = delete;

    void PrintUniqueID() {
        std::cout << "Current Instance's unique id: " << this->unique_id << std::endl;
    }


    //////////////////////////////////////////////////////////////////////////
    void addNewEmployee(int id, string name, string password) {
        Employee* e = new Employee();
        e->setId(id);
        e->setName(name);
        e->setPassword(password);

        Employees.push_back(*e);

    }
    void addEmployee(Employee& e) {
        Employees.push_back(e);
    }
    void editEmployee(Employee& e, int id, string name, string password) {
        e.setId(id);
        e.setName(name);
        e.setPassword(password);
    }
    /*   void editEmployee(Employee& e, int id) {
           e.setId(id);
       }
       void editEmployee(Employee& e, string name) {
           e.setName(name);
       }*/
    void getAllEmployees() {
        for (int i = 0; i < Employees.size(); i++)
        {
            cout << Employees[i].getName() << endl;
        }
    }
    Employee* searchEmployee(int id) {
        for (int i = 0; i < Employees.size(); i++) {
            if (Employees[i].getId() == id) {
                Employee* e = &Employees[i];
                return e;
            }
        }
    }
};
