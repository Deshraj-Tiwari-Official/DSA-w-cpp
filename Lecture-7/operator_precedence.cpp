#include <iostream>

using namespace std;

int main() {
  // Operator precedence is the order in which operators are evaluated.
  // The order is as follows:
  // 1. Parentheses
  // 2. Multiplication, division, modulus
  // 3. Addition, subtraction
  // 4. Bitwise shift
  // 5. Relational operators
  // 6. Equality operators
  // 7. Logical AND
  // 8. Logical XOR
  // 9. Logical OR
  // 10. Assignment operators

  int a = 5, b = 7;

  // Parentheses
  cout << "(a + b) * 2 = " << ((a + b) * 2) << endl;
  // Multiplication, division, modulus
  cout << "a * b / a % b = " << (a * b / a % b) << endl;
  // Addition, subtraction
  cout << "a + b - a = " << (a + b - a) << endl;
  // Bitwise shift
  cout << "a << 1 >> 1 = " << (a << 1 >> 1) << endl;
  // Relational operators
  cout << "(a > b) && (a < b) = " << ((a > b) && (a < b)) << endl;
  // Equality operators
  cout << "(a == b) || (a != b) = " << ((a == b) || (a != b)) << endl;
  // Logical AND
  cout << "(true && true) || (false && true) = "
       << ((true && true) || (false && true)) << endl;
  // Logical XOR
  cout << "(true || false) && (false || true) = "
       << ((true || false) && (false || true)) << endl;
  // Logical OR
  cout << "(true || false) && (true || false) = "
       << ((true || false) && (true || false)) << endl;
  // Assignment operators
  a = a + b;
  cout << "a = " << a << endl;

  return 0;
}
