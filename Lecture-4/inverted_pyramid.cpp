#include <iostream>

using namespace std;

// Inverted triangle with space after each number...
int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < (n - i); j++) {
      cout << (i + 1) << " ";
    }
    cout << endl;
  }
  return 0;
}
