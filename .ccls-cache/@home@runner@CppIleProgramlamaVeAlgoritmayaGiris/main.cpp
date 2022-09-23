#include <iostream>

using namespace std;

int main() {
  /*
    Matematiksel Operatörler
      +,-,*,/
  */

  int sayi1 = 10;
  int sayi2 = 4;

  cout << "Toplama: " << sayi1 + sayi2 << endl;
  cout << "Çıkartma: " << sayi1 - sayi2 << endl;
  cout << "Çarpma:" << sayi1 * sayi2 << endl;
  cout << "Bölme: " << sayi1 / sayi2 << endl;

  int a = 5;
  a = a + 2;
  cout << a << endl;
  a += 2;
  cout << a << endl;

  return 0;
}