#include <iostream>
using namespace std;

class Employee {
public:
  Employee() { cout << "Constuctor çağırıldı." << endl; }
  ~Employee() { cout << "Destructor çağırıldı" << endl; }
};

int main() {
  Employee *emp = new Employee(); // obje oluşturuldu
  delete emp;

  return 0;
}
