#include <iostream>

using namespace std;

void degerDegistir(int *ptr) {
  *ptr = 20;
  cout << "Fonksiyon içindeki deger: " << *ptr << endl;
}

int main() {

  /*
  int a = 10;
  cout << "a degişkeninin degeri: " << a << endl;
  degerDegistir(&a);
  cout << "Fonksiyon bittikten sonra a degişkenin degeri: " << a << endl;
  */

  // int array[] = {1, 2, 3, 4};
  /*
  cout << array << endl;
  cout << array + 1 << endl;
  cout << array + 2 << endl << endl;

  int *ptr = array;
  cout << ptr << endl;
  ptr = ptr + 1;
  cout << "Pointerın yeni değeri: " << ptr << endl;
  */

  /*
  int *ptr = &array[2];
  cout << ptr << endl;
  */

  string array[] = {"mustafa", "murat", "coşkun"};
  string *ptr = array;
  cout << ptr + 1 << endl;
  cout << *(ptr + 1) << endl;

  cout << ptr[1] << endl;

  return 0;
}
