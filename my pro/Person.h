#pragma once
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class Person {
protected:
    int id;
    string name;
    string password;
public:
    //Cons
    Person() {
        id = 0;
    };
    Person(int id, string name, string password)
    {
        this->password = password;
        this->name = name;
        this->id = id;
    }
    //==>>setters<<==
    virtual void  setName(string name) = 0;
    virtual void  setId(int id) = 0;
    virtual void setPassword(string password) = 0;
    //==>>getters<<==
    virtual int getId() = 0;
    virtual string getName() = 0;
    virtual string getPassword() = 0;
    //====>>methods<<====
    virtual void displayInfo() = 0;
};


   