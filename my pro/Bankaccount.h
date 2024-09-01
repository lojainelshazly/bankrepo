#pragma once
#include <iostream>
#include <string>
using namespace std;

    


    class Bank_Account {
        //******************** Attributes ********************
    protected:
        int id;
        string name;


    public:
        //******************** Constructors ********************

        Bank_Account() {
            id = 0;
        }

        Bank_Account(int id, string name) {
            this->id = id;
            this->name = name;
        }

        //******************** Setters ********************

        void setId(int id) {
            this->id = id;
        }

        void setName(string name) {
            this->name = name;
        }


        //******************** Getters ********************

        int getId() {
            return id;
        }

        string getName() {
            return name;
        }

        //******************** Methods ********************

        void getAccountInfo() {
            cout << "Please Enter Your Name : " << endl;
            cin >> name;
            cout << "Please Enter Your ID : " << endl;
            cin >> id;
            cout << "\n==================\n";
        }

        //****************************************************
    };



