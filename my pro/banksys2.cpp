
#include <iostream>
#include <fstream>
#include <string>
#include "DataSourceInterface.h"
#include "Parser.h"
using namespace std;

int main()
{
    //========clientsfile==========
    fstream file1, file2, file3;

    string filec="clients.txt";
    file1.open(filec, ios::app);
    file1 << " clients file";

    //string s1;
    //file1.open("clients.txt", ios::in);
    //getline(file1, s1);
    //while (getline(file1, s1)) {
    //    cout << s1 << "\n";
    //}
    //
    //==========employeesfile==========
    string filee = "employees.txt";
    file2.open(filee, ios::app);
    file2 << "employees file";

    //string s2;
    //file2.open("employee.txt", ios::in);
    //getline(file2, s2);
    //while (getline(file2, s2)) {
    //    cout << s2 << "\n";
    //}
    //////=============adminsfile==========
    string filea = "admins.txt";
    file3.open(filea, ios::app);
    file3 << "admins file";

  /*  string s3;
    file3.open("admins.txt", ios::in);
    getline(file3, s3);
    while (getline(file3, s3)) {
        cout << s3 << "\n";
    }*/

    file1.close();
    file2.close();
    file3.close();
    system("pause");
}


