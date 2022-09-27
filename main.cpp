#include <iostream>

using namespace std;

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }
}
void printArray2(int *prt, int size) {
  for (int i = 0; i < size; i++) {
    cout << prt[i] << endl;
  }
}
void printConstArray(const int *ptr1, const int *ptr2) {
  for (; ptr1 != ptr2; ptr1++) {
    cout << "Eleman: " << *ptr1 << endl;
  }
}
struct Employee {
  int id;
  string name;
  string department;
};

int main() {
  /*
  // Arayler ve fonksiyonlar
  int a[] = {1, 2, 3, 4, 5};
  printArray(a, 5);
  printArray2(a, 5);

  // Const
  const int w = 30;
  const int q[] = {10, 20, 30, 40, 50};

  // Pointerlar ve const
  int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  printConstArray(array + 2, array + 7);
  */
  // Yapılar(Structurelar)
  Employee isci1 = {12, "Mustafa", "Bilişim"};
  cout << isci1.name << endl;
  isci1.name = "Kazım";
  cout << isci1.name << endl;

  return 0;
}
