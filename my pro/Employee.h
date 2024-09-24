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
        id = 0;
        salary = 0;
    }
    Employee(int id, string name, string password, int salary)
    {
        this->name = name;
        this->id = id;
        this->password = password;
        this->salary = salary;
    }

    void setName(string name)
    {

        if (name.size() >= 5 && name.size() <= 20)
        {
            this->name = name;
            // cout << "name accepted" << endl;
        }
        else
        {
            cout << "name min size is 5 and max size is 20" << endl;
        }
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setPassword(string password)
    {
        if (password.size() >= 8 && password.size() <= 20)
        {
            cout << "password accepted " << endl;
            this->password = password;
        }
        else
        {
            cout << "min size must be 8 and max size 20 ";
        }
    }
    void setSalary(double salary)
    {
        
        if (salary < 5000)
            cout << "min salary must be 5000" << endl;
        else
        {
            cout << "salary accepted" << endl;
            this->salary = salary;
        }
    }
    //==>>getters<<==
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getPassword()
    {
        return password;
    }
    double getSalary()
    {
        return salary;
    }
    //====>>methods<<====
    void displayInfo()
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