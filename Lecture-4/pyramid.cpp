#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  // Start the outer loop from i = 0
  // INFO: Bro I noticed that when I do this thing starting the loop from 1, it looks better but when I do it with 0, it adds an extra empty line before the initial 1 of the first line. IDK why. Not sure. If you know now, or you are someone else looking at my sphagetti code for no reason, tell me by creating a pull request or if u r me, just edit this and tell why the fuk does that happen.
  for (int i = 0; i <= n; i++) {
    // Spaces
    for (int j = 0; j < (n - i); j++) {
      cout << " ";
    }
    // Ascending numbers
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    // Descending numbers
    for (int j = i - 1; j >= 1; j--) {
      cout << j;
    }
    cout << endl;
  }

  return 0;
}
