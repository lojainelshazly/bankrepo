#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Person.h"
using namespace std;

class Client : public Person
{

    //******************** Attributes ********************
    string type; // option type
    double balance;

public:
    //******************** Constructors ********************
    Client()
    {
        balance = 0;
    }

    Client(string password, string type, double balance, int id, string name) : Person(id, name, password)
    {
        this->type = type;
        setBalance(balance);
    }

    //******************** Setters ********************

    void setBalance(double Balance)
    {
        if (Validation::validateBalance(balance))
        {
            this->balance = balance;
        }
        else
        {
            cout << "Invalid balance \n";
        }
    }

    //******************** Getters ********************

    string getType()
    {
        return type;
    }

    double getBalance()
    {
        return balance;
    }

    //******************** Methods ********************

    void display()
    {
       Person ::display();
       cout<<"Balance : " << balance<< endl  ;
    }

    //******************** Withdrawal ********************
    void withdraw(double amount)
    {
        cout << "Please Enter The Withdrawal Amount : " << endl;
        if (amount <= balance && balance > 0)
        {
            balance -= amount;
            cout << "Amount After Withdraw : " << balance << endl;
        }
        else
        {
            cout << " Sorry, This Amount Exceeds Your Balance\n";
        }
    }

    //******************** Deposit ********************
    void deposit(double amount)
    {
        cout << "Please Enter Amount To Deposit : " << endl;
        if (amount > 0)
        {
            balance += amount;
        }
    }

    //******************** Checking Balance ********************
    double check(double balance)
    {
        return balance;
    }

    //******************** Transfer to ********************
    void transferTo(Client &c2, double amount)
    {
        cout << "Please Enter The Amount : " << endl;
        withdraw(amount);
        c2.deposit(amount);
        
    }
    void checkBalance(){
        cout << "Balance : "<<balance <<endl;
    }
};
// Vector +Interator global
static vector<Client> allClients;
static vector<Client>::iterator clIt;