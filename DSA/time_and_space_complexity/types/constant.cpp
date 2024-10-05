#include <iostream>

using namespace std;

int main() {
  // Time complexity: O(1) because all the operations are constant.
  int n;
  cin >> n;
  int ans = n * (n+1)/2;
  cout << ans << endl;
  return 0;
}
