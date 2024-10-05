#include <iostream>

using namespace std;

int main() {
  int n = 5;

  // O(n^2)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // Some code here
    }
  }

  // O(n^3)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        // Some code here
      }
    }
  }

  cout << "Hello World!" << endl;
  return 0;
}
