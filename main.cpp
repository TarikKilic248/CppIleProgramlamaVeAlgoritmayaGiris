#include <iostream>

using namespace std;

int main() {

  int a = 5;
  int *ptr = &a;

  cout << "a nın adresi: " << &a << endl;
  cout << "a nın adresi: " << a << endl;
  cout << "a nın adresi: " << ptr << endl;
  cout << "Degiskenin degeri: " << *ptr << endl;

  *ptr = 6; // yıldız pointerin işaret ettiği hücrenin içerisine giriş sağlıyor
  
  cout << "Degiskenin yeni degeri: " << a << endl;
  
  return 0;
}
