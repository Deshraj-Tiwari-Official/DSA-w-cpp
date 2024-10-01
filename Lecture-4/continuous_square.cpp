#include <iostream>

using namespace std;

int main() {
  // For number
  int a;
  cout << "Enter a number: ";
  cin >> a;

  int num = 1;

  for (int i = 0; i <= (a - 1); i++) {
    for (int j = 0; j <= (a - 1); j++) {
      cout << num++ << " ";
    }
    cout << endl;
  }
  cout << endl;


  // For letters ONLY. Not any other ACSII characters.
  int b;
  cout << "Enter a number: ";
  cin >> b;

  char letter = 'a';

  for (int i = 0; i <= (b - 1); i++) {
    for (int j = 0; j <= (b - 1); j++) {
      if (letter > 'z') {
        break;
      }
      cout << letter++ << " ";
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}
