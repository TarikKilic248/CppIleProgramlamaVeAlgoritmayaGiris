#include "Employee.h"
#include <iostream>
using namespace std;

int main() {
  Employee employee;
  employee.id = 12;
  employee.name = "Mustafa Murat";
  employee.salary = 3000;

  employee.showInfos();

  return 0;
}
