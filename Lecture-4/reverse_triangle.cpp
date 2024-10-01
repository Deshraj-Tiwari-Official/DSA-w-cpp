#include <iostream>

using namespace std;

int main() {
  int a;
  cout << "Enter the number of rows: ";
  cin >> a;

  for (int i = 0; i < a; i++) {
    for (int j = i+1; j > 0; j--) {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
