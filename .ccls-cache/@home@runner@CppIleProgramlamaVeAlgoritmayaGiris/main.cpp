#include <iostream>

using namespace std;

int main() {
  int a, b;
  string islem;

  cout << "Hesap makinesi programına hoş geldiniz.\n";
  cout << "1. işlem = Toplama (a + b = c)\n";
  cout << "2. işlem = Çıkartma (a - b = c)\n";
  cout << "3. işlem = Çarpma (a * b = c)\n";
  cout << "4. işlem = Bölme (a / b = c)\n";

  cout << "İşlemi giriniz: 1/2/3/4\n";
  cin >> islem;

  if (islem == "1") {
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "a + b = " << a + b;
  }
  if (islem == "2") {
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "a - b = " << a - b;
  }
  if (islem == "3") {
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "a * b = " << a * b;
  }
  if (islem == "4") {
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "a / b = " << a / b;
  }

  return 0;
}