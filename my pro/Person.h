#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Person
{
protected:
    int id;
    string name;
    string password;

public:
    Person()
    {
        id = 0;
        name = " ";
        password = " ";
    };
    Person(int id, string name, string password)
    {
        setId(id);
        setName(name);
        setPassword(password);
    }
    //==>>setters<<==
    void setName(string name)
    {
        if (Validation::validateName(name))
        {
            this->name = name;
        }
        else
            cout << "Invalid name \n";
    }
    void setPassword(string password){
         if (Validation::validatepassword(password))
        {
            this->password = password;
        }
        else
        {
            cout << "Invalid password \n";
        } 
    }
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return this->id;
    }
    string getName()
    {
        return this->name;
    }
    string getPassword()
    {
        return this->password;
    }
    void display()
    {
        cout << "name : " << name << endl;
        cout << "id : " << id << endl;
        cout << "password : " << password << endl;
        cout << "///////////////////////////////////////" << endl;
      
    }
};
