#include <iostream>

using namespace std;

int main() {
  // Time complexity: O(n) because we iterate through the loop n times
  int n;
  cin >> n;
  int factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }
  cout << factorial << endl;
  return 0;
}
