#pragma once
#include <iostream>

using namespace std;
class Person
{
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
        void  setId(int id) {
            this->id = id;
      }
        void setPassword(string password) {
            this->password = password;
         }
        //==>>getters<<==
        int getId() {
            return id;
        }
        string getName() {
            return name;
         }
        string getPassword() {
            return password;
         }
        //====>>methods<<====
        void displayInfo() {
            cout << "name is: " << name;
            cout << "id is: " << id;
            cout << "password is: " << password;

        }
    };


