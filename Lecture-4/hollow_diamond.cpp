#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter the number of rows (half of the diamond): ";
  cin >> n;

  // Upper half
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    cout << "*";

    if (i != 0) {
      for (int j = 0; j < 2 * i - 1; j++) {
        cout << " ";
      }
      cout << "*";
    }

    cout << endl;
  }

  // Lower half
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    cout << "*";

    if (i != 0) {
      for (int j = 0; j < 2 * i - 1; j++) {
        cout << " ";
      }

      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
