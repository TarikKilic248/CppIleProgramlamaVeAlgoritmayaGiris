#include <iostream>

using namespace std;

struct Employee {
  int id;
  string name;
  string department;
};
// FOnksiyon olarak yazdırma
void showEmployee(Employee employee) {
  cout << "Id: " << employee.id << endl;
  cout << "Name: " << employee.name << endl;
  cout << "Department: " << employee.department << endl;
}
// Pointer olarak yazdırma
void show(Employee *employee) {
  cout << "Id: " << employee->id << endl;
  cout << "Name: " << employee->name << endl;
  cout << "Department: " << employee->department << endl;
}

int main() {
  Employee employee1 = {12, "Mustafa Murat", "Bilişim"};
  Employee *ptr = &employee1;
  cout << employee1.name << endl;
  cout << ptr->department << endl;

  showEmployee(employee1);//fonksiyon
  
  show(&employee1);//pointer

  return 0;
}
