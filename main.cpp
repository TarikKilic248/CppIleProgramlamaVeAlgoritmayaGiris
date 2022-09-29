#include <iostream>
using namespace std;

class Employee {
private:
  string name;
  int age;

public:
  void setName(string isim) { name = isim; }
  string getName() { return name; }
  void setAge(int yas) {
    if (yas < 0) {
      cout << "0 < x olmalıdır!" << endl;
    } else {
      age = yas;
    }
  }
  int getAge() { return age; }
};

int main() {
  Employee *employee = new Employee();
  employee->setName("Mustafa Murat");
  employee->setAge(25);

  cout << employee->getName()<<endl;
  cout << employee->getAge()<<endl;

  return 0;
}
