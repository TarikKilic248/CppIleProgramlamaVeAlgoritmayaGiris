#include <iostream>

using namespace std;

void selamla() { cout << "Merhaba" << endl; }
void selamla(string name) { cout << "Mehaba" << name << endl; }
void selamla(string name1,string name2){
  cout<<"Merhaba"<<name1<<","<<" "<<name2<<endl;
}

int main() {
  selamla();
  selamla("Mustafa");
  selamla("Mustafa","Oğuz");
  return 0;
}
