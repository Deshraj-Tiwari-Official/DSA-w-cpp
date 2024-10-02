#include <iostream>

using namespace std;

int main() {
  int a = 5, b = 7;

  // Basically, bitwise operators are used to perform operations on individual
  // bits of a number. The result of the operation is always an integer
  // They are used in cenarios to improve the performance of the code
  // For example, if we want to check if a number is even or odd, we can use
  // bitwise operators to check if the last bit is set or not

  // NOTE: Checkout how they work in the documentation or any other source.

  // Bitwise AND
  cout << "a & b = " << (a & b) << endl;
  // Bitwise OR
  cout << "a | b = " << (a | b) << endl;
  // Bitwise XOR
  cout << "a ^ b = " << (a ^ b) << endl;
  // Bitwise NOT
  cout << "~a = " << ~a << endl;
  // Bitwise left shift
  cout << "a << 1 = " << (a << 1) << endl;
  // Bitwise right shift
  cout << "a >> 1 = " << (a >> 1) << endl;

  return 0;
}
