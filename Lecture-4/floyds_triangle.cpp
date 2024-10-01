#include <iostream>

using namespace std;

int main() {
  int a;
  cout << "Enter the number of rows: ";
  cin >> a;

  int number = 1;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < i; j++) {
      cout << number << " ";
      number++;
    }
    cout << endl;
  }
  return 0;
}
