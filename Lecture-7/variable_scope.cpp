#include <iostream>

using namespace std;

int main() {
  // Variable scope is the region of code in which a variable is valid.
  // It is the region of code in which the variable can be accessed.
  // The scope of a variable is determined by where it is declared.

  // Global scope
  int a = 5;
  cout << "a = " << a << endl;

  // Local scope
  {
    int b = 7;
    cout << "b = " << b << endl;
    a = a + b;
  }
  cout << "a = " << a << endl;
  // cout << "b = " << b << endl; // Will not work

  // Block scope
  if (true) {
    int c = 9;
    cout << "c = " << c << endl;
  }
  cout << "a = " << a << endl;
  // cout << "c = " << c << endl; // Will not work


  return 0;
}
