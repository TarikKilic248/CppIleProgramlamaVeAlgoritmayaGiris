#include <iostream>

using namespace std;

int main() {
  int islem;
  cout << "işlemi giriniz: ";
  cin >> islem;

  switch (islem) {
  case 1:
    cout << "1.işlemi seçtiniz" << endl;
    break;
  case 2:
    cout << "2.işlemi seçtiniz" << endl;
    break;
  case 3:
    cout << "3.işlemi seçtiniz" << endl;
    break;
  case 4:
    cout << "4.işlemi seçtiniz" << endl;
    break;
  default:
    cout << "1-2-3-4 den birini seçin";
  }
  return 0;
}