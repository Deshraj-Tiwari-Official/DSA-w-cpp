#include <iostream>

using namespace std;

int main() {
  char letter = 'A';
  // Type conversion. This is implicit. Which means, the compiler does it for you.
  int ascii_value_of_letter = letter;
  cout << ascii_value_of_letter << endl;

  // Type casting. This is explicit. It is primarily used when you want to type cast a larger data type to a smaller data type.
  double price = 99.9999;
  int int_price = (int)price; // It assigns 99 to int_price
  cout << int_price << endl;

  return 0;
}
