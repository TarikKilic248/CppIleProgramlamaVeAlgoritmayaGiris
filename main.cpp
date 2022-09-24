#include <iostream>

using namespace std;

int main() {
  string bys_username = "mustafa_murat";
  string bys_password = "123456";

  string username, password;

  cout << "Kullanıcı adı ve parolanızı giriniz.\n";
  cout << "Kullanıcı adı: ";
  cin >> username;
  cout << "Parola: ";
  cin >> password;

  if (bys_username == username && bys_password == password) {
    cout << "Hoş geldiniz";
  } else if (bys_username != username && bys_password == password) {
    cout << "Kullanıcı adı Hatalı şifre doğru";
  }

  return 0;
}