#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include <vector>

using namespace std;
#include "Client.h"
#include "Validation.h"
class Employee : public Person
{
protected:
    double salary;
    // vector<Client> clients;

public:
    Employee()
    {
        salary = 0;
    }
    Employee(int id, string name, string password, int salary) :Person(id ,name ,password)
    {
    setSalary(salary);
    }

    void setSalary(double salary)
    {
        if(Validation::validateSalary(salary)){
            this->salary =salary;
        }
        else {
            cout<<"Invalid salary\n";
        }
      
    }
    //==>>getters<<==
   
    double getSalary()
    {
        return salary;
    }
    //====>>methods<<====
    void display()
    {
        Person::display();
        cout<<"Salary : "<<salary <<endl ;

    }
    void addClient(Client& client)
    {
        allClients.push_back(client);
    }
    Client* searchClient(int id)
    {
        for(clIt =allClients.begin() ; clIt != allClients.end() ; clIt++){
           if(clIt->getId()==id){
            return clIt._Ptr;
           }
           return NULL ;
        }
    }
    void listClient()
    {
        for(clIt =allClients.begin() ; clIt != allClients.end() ; clIt++){
           clIt->display();
        }
    }

    void editClient( int id, string name, string password , double balance)
    {
        searchClient(id)->setName(name);
        searchClient(id)->setPassword(password);
        searchClient(id)->setBalance(balance);
    }
    
};
//Vector +Interator global
static vector<Employee> allEmployees;
static vector<Employee>::iterator eIt;