#pragma once
#include <iostream>
#include "client.h"
//#include "employee.h"
//#include "admin.h"
using namespace std;
class DataSourceInterface
{
//protected:
  /*  Client client;*/
   /* Employee employee;
      Admin admin;*/
public:
    virtual void addClient(Client client) = 0;
   /* virtual void addEmployee(Employee) = 0;
    virtual void addAdmin(Admin) = 0;*/

    virtual void getAllClients() = 0;
    virtual void getAllEmployees() = 0;
    virtual void getAllAdmins() = 0;

    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;

    ~DataSourceInterface() {

    }
};

