#pragma once
#include<iostream>
using namespace std;
#include "Employee.h"
class Admin : public Employee {
private:
    Employee arr[1000] = {};
    int static  counter;

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
    Admin(Admin& other) = delete;  //Singilture

    void PrintUniqueID() {
        std::cout << "Current Instance's unique id: " << this->unique_id << std::endl;
    }


    //////////////////////////////////////////////////////////////////////////
    void addNewEmployee(int id, string name, string password) {
        Employee* e = new Employee();
        e->setId(id);
        e->setName(name);
        e->setPassword(password);
        arr[counter] = *e;
        counter++;
    }
    void addEmployee(Employee e) {
        arr[counter] = e;
        counter++;
    }
    void editEmployee(Employee& e, int id, string name, string password) {
        e.setId(id);
        e.setName(name);
        e.setPassword(password);
    }
    void editEmployee(Employee& e, int id) {
        e.setId(id);
    }
    void editEmployee(Employee& e, string name) {
        e.setName(name);
    }
    void getAllEmployees() {
        for (int i = 0; i < counter; i++)
        {
            cout << arr[i].getName() << endl;
        }
    }
};
