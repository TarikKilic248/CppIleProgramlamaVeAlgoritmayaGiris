#include <iostream>

using namespace std;

class Student {
public:
  string name;
  void tellName() { cout << "Benim adım: " << name << endl; }
};

int main() {
  Student student1;
  Student student2;
  student1.name = "Mustafa Murat";
  student2.name = "Oğuz";
  student1.tellName();
  student2.tellName();

  return 0;
}
