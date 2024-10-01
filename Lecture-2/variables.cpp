#include <iostream>

using namespace std;

int main() {
  // Data types in C++
  // int, float, double, char, bool, string
  
  int a = 10;
  bool b = true;
  char c = 'a';
  double d = 10.5;
  float f = 10.5f; // we write f at the end to denote that it is a float and not a double
  string s = "Hello, World!";

  // How many bytes does a variable occupy?
  cout << "sizeof(int) = " << sizeof(a) << endl;
  cout << "sizeof(bool) = " << sizeof(b) << endl;
  cout << "sizeof(char) = " << sizeof(c) << endl;
  cout << "sizeof(double) = " << sizeof(d) << endl;
  cout << "sizeof(float) = " << sizeof(f) << endl;
  cout << "sizeof(string) = " << sizeof(s) << endl;

  cout << "Hello, World!" << endl;
  return 0;
}
