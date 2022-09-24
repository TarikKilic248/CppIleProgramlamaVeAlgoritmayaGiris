#include <iostream>

using namespace std;

int main() {

  /*
  int i = 0;
  while (i < 10) {
    if (i == 5) {
      break;
    }
    cout << "i: " << i << endl;
    i++;
  }
  */

  
  for (int i = 0; i < 10; i++) {
    if (i == 3 || i == 5 || i == 7) {
      continue;
    }
    cout << "i: " << i << endl;
  }
  

  

  return 0;
}