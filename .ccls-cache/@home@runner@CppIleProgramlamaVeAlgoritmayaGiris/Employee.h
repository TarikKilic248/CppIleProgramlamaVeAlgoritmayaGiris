#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
public:
  string name;
  int id;
  int salary;
  void showInfos();
};

#endif