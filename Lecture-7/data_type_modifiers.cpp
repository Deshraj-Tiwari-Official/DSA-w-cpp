#include <iostream>

using namespace std;

int main() {
  // n bytes = n*4 bits
  // Therefore, for normal int(32 bits), it is 4 bytes (majority of systems) which means integers in the range -2**32 to 2**32-1 (due to 0) can be stored
  cout << sizeof(int) << endl;
  cout << sizeof(long int) << endl;
  cout << sizeof(long long int) << endl;
  cout << sizeof(short int) << endl;

  // signed and unsigned
  // By default, int is signed, which means it can store negative numbers as well as positive numbers
  // However, we can make it unsigned by using the unsigned keyword

  // Using unsigned, we do not need the MSB(Most Significant Bit) to denote positive and negative numbers, so we can store positive numbers up to 2**32-1 which is double the size of what a signed int can store.
  unsigned int a = 1000000000;
  cout << a << endl;

  return 0;
}
