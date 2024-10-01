#include <iostream>

using namespace std;

int main() {
  int a;
  cout << "Enter a number: ";
  cin >> a;

  for (int i = 0; i <= (a - 1); i++) {
    for (int j = 0; j <= (a - 1); j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
  cout << endl;

  int b;
  cout << "Enter a number: ";
  cin >> b;

  for (int i = 0; i <= (b - 1); i++) {
    for (int j = 0; j <= (b - 1); j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;

  int c;
  cout << "Enter a number: ";
  cin >> c;

  for (int i = 0; i <= (c - 1); i++) {
    char ch  = 'A';
    for (int j = 0; j <= (c - 1); j++) {
      cout << ch++ << " ";
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}
