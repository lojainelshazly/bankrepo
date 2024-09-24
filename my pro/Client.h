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
        this->balance = balance;
    }

    //******************** Setters ********************

    void setPassword(string password)
    {
        this->password = password;
    }

    void setType(string type)
    {
        this->type = type;
    }

    void setBalance(double balance)
    {
        this->balance = balance;
    }

    //******************** Getters ********************

    string getPassword()
    {
        return password;
    }

    string getType()
    {
        return type;
    }

    double getBalance()
    {
        return balance;
    }

    //******************** Methods ********************

    void getAccountInfo()
    {
        cout << "Please Enter Your Password : " << endl;
        cin >> password;
        cout << "Please Enter Your Account Type : " << endl;
        cin >> type;
        cout << "\n==================\n";
    }

    //******************** Withdrawal ********************
    double withdraw(double amount)
    {
        cout << "Please Enter The Withdrawal Amount : " << endl;
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount After Withdraw : " << balance << endl;
        }
        else
            {cout << " Sorry, This Amount Exceeds Your Balance\n";}
        return balance;
    }

    //******************** Deposit ********************
    double deposit(double amount)
    {
        cout << "Please Enter Amount To Deposit : " << endl;
        balance += amount;
        return balance;
    }

    //******************** Checking Balance ********************
    double check(double balance)
    {
        return balance;
    }

    //******************** Transfer to ********************
    double transferTo(Person& x, double amount)
    {
        cout << "Please Enter The Amount : " << endl;
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount After Transfering : " << balance << endl;
        }
        else
            cout << "Sorry, This Amount Exceeds Your Balance\n";
        return balance;
    }
};
//Vector +Interator global
static vector<Client> allClients;
static vector<Client>::iterator clIt;