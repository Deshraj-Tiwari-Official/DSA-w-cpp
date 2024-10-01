#include <iostream>

using namespace std;

int main() {
  // Arithmetic operators
  int a = 20, b = 10;
  cout << "sum: " << (a + b) << endl;
  cout << "difference: " << (a - b) << endl;
  cout << "product: " << (a * b) << endl;
  cout << "division: " << (a / b) << endl;
  cout << "modulus: " << (a % b) << endl;

  // Relational operators
  // 1 is true, 0 is false
  cout << "greater than: " << (a > b) << endl;
  cout << "less than: " << (a < b) << endl;
  cout << "greater than or equal to: " << (a >= b) << endl;
  cout << "less than or equal to: " << (a <= b) << endl;
  cout << "equal to: " << (a == b) << endl;
  cout << "not equal to: " << (a != b) << endl;

  // Logical operators
  cout << "and: " << (a > b && a < b) << endl;
  cout << "or: " << (a > b || a < b) << endl;
  cout << "not: " << !(a > b) << endl;

  // Unary operators
    // a and b are decremented and incremented and also the result is stored in c and d
    // Increment
    int c = ++a;
    int d = a++;
    cout << "a: " << a << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;

    // Decrement
    int e = --b;
    int f = b--;
    cout << "b: " << b << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;

  return 0;
}
