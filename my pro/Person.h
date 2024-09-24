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
     void  setName(string name) {
        this->name = name;
    }
    virtual void  setId(int id) {
        this->id = id;
    }
    virtual void setPassword(string password) {
        this->password = password;
    }
    int getId() {
        return this->id;
    }
     string getName() {
        return this->name;
    }
    string getPassword() {
        return this->password;
    }
    void display()
    {
        cout << "name : " << name << endl;
        cout << "id : " << id << endl;
        cout<<"///////////////////////////////////////"<<endl;
    //    cout << "password is: " << password << endl;
    }
    
};


   