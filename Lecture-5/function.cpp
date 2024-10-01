#include <iostream>
// Not going too ham because it it just like c and i know c, poothon, and javaf*ck

using namespace std;

int sum(int a, int b) {
  return a + b;
}

int main() {
  int a, b;

  cout << "Enter a: ";
  cin >> a;

  cout << "Enter b: ";
  cin >> b;
  
  cout << sum(a, b) << endl;
  return 0;
}
