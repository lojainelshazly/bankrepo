
#include<iostream>
using namespace std;
#include<vector>
#include "Employee.h"

using namespace std;

class Admin : public Employee {
//private:
   // vector <Employee> Employees;

    /*static Admin* one_and_only_instance;
    static int unique_id;
    Admin(const int num) {
        unique_id = num;
    }*/


public:
    Admin():Employee(){

    }
    Admin(int id, string name, string password, double salary):Employee(id ,name,password ,salary){

    }
  
   /* static Admin* get_instance(const int num) {
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
    }*/


    //////////////////////////////////////////////////////////////////////////
    void addEmployee(Employee& employee)
    {
        allEmployees.push_back(employee);
    }
    Employee* searchEmployee(int id)
    {
        for(eIt =allEmployees.begin() ; eIt != allEmployees.end() ; aIt++){
           if(eIt->getId()==id){
            return eIt._Ptr;
           }
           return NULL ;
        }
    }
    void editEmployee( int id, string name, string password ,double salary)
    {
        searchEmployee(id)->setName(name);
        searchEmployee(id)->setPassword(password);
         searchEmployee(id)->setSalary(salary);
    }
      void listEmployee()
    {
        for(eIt =allEmployees.begin() ; eIt != allEmployees.end() ; eIt++){
           eIt->display();
        }
    }
};
//Vector +Interator global
static vector<Admin> allAdmins;
static vector<Admin>::iterator aIt;