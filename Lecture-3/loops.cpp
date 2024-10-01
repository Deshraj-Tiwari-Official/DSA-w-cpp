#include <iostream>

using namespace std;

int main() {
  // for loop
  cout << "\nfor loop" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << i << endl;
  }

  // while loop
  cout << "\nwhile loop" << endl;
  int j = 1;
  while (j <= 10) {
    cout << j << endl;
    j++;
  }

  // do-while loop
  cout << "\ndo-while loop" << endl;
  j = 1;
  do {
    cout << j << endl;
    j++;
  } while (j <= 10);

  return 0;
}
