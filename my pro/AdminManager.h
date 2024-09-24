#include <iostream>
#include "Admin.h"
#include "FileManager.h"
using namespace std;
class AmdinManager
{
private:
    static void printAdminMenu()
    {
        system("cls");
        cout << "(1) Display my info";
        cout << "(2) update password";
        cout << "(3) Add new Client";
        cout << "(4) Search for Client";
        cout << "(5) List all clients";
        cout << "(6) edit client info";
        cout << "(7) Add new Employee";
        cout << "(8) Search for Employee";
        cout << "(9) List all Employees";
        cout << "(10) Edit Employee infoo";
        cout << "(11) logout\n";
    }
    static void back(Admin *admin)
    {
        cout << endl;
        system("pause");
    }

public:
    static Admin* login(int id, string password)
    {
        for (aIt = allAdmins.begin(); aIt != allAdmins.end(); aIt++)
        {
            if (aIt->getId() == id && aIt->getPassword() == password)
            {
                return aIt._Ptr;
            }
        }
        return NULL;
    }
    static bool adminOptions(Admin *admin)
    {
        printAdminMenu();
        cout << " ypur choice is: ";
        Employee e;
        int choice;
        int id;
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            admin->display();
            break;
        case 2:
            FileManager::updateAdmins();
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            //
            //
            //
            admin->addEmployee(e);
            FileManager::updateEmployees();
            cout << "Employee added succedsfully.\n";
            break;
        case 8:
            system("cls");
            cout<<"Enter Employee Id";
            cin>> id ;
            if (admin->searchEmployee(id)==NULL)
            {
               cout<< "\n Employee not found\n";
            }else{
                admin->searchEmployee(id)->display();
            }
            break;
        case 9:
            system("cls");
            cout<<"All employees \n";
            admin->listEmployee();
            break;
        case 10:
            system("cls");
            cout<<"All employees \n";
            cin >> id;
             if (admin->searchEmployee(id)==NULL)
            {
               cout<< "\n Employee not found \n";
            }else{
                string name ;
                string password;
                double salary;
                admin->editEmployee(id,name,password,salary);
                FileManager::updateClients();
                cout<<endl<<"   Employee info updated \n";
            }
            break;
        case 11:
           return false;
            break;
        default:
             system("cls");
             adminOptions(admin);
             return true;
        }
    }
};