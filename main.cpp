#include <iostream>
using namespace std;

class Employee {
public:
  string *s;
  int *i;
  Employee(string str, int ivalue) {
    s = new string;
    i = new int;
    *s = str;
    *i = ivalue;
  }
  void show() {
    cout << "String değer: " << *s << endl << "Int değer:" << *i << endl;
  }
  ~Employee() {
    cout << "Destructor çağırıldı" << endl;
    delete s;
    delete i;
  }
};

int main() {
  Employee *emp = new Employee("Mustafa", 25);
  emp->show();
  delete emp;

  return 0;
}
