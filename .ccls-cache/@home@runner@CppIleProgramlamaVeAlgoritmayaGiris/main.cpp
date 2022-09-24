#include <iostream>

using namespace std;

int main() {
  string str1 = "Bu bir stringdir\n";
  string str2 = "bu da bir sitring\n";
  cout << str1 + str2;

  string password = "yazilim";
  string input;
  cout << "Lütfen parolayı girin" << endl;
  cin >> input;

  if (password == input) {
    cout << "Parola doğru";
  } else {
    cout << "Parola Yanlış";
  }

  return 0;
}