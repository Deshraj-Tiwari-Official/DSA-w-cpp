#include <iostream>

using namespace std;

int main() {
  int a;
  cout << "Enter the number of rows: ";
  cin >> a;

  for (int i = 0; i < a; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  int b;
  cout << "Enter the number of rows: ";
  cin >> b;

  for (int i = 0; i < b; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << (i+1) << " ";
    }
    cout << endl;
  }

  int c;
  cout << "Enter the number of rows: ";
  cin >> c;

  char letter = 'A';
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << letter << " ";
    }
    letter++;
    cout << endl;
  }

  int d;
  cout << "Enter the number of rows: ";
  cin >> d;

  for (int i = 0; i < c; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << j+1 << " ";
    }
    cout << endl;
  }

  return 0;
}
