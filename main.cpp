#include <iostream>

using namespace std;

void selamla(); // Fonksiyon prototipi

void factorial(int sayi) {
  int fakt = 1;
  for (int i = 2; i <= sayi; i++) {
    fakt *= i;
  }
  cout << fakt << endl;
}

int toplama(int a, int b, int c) { return a + b + c; }

int main() {
  selamla();

  cout << "Faktoriyel için sayi giriniz\n";
  int sayi;
  cin >> sayi;
  factorial(sayi);

  cout << toplama(4, 6, 5);
  return 0;
}

void selamla() { cout << "Merhaba!\n"; }