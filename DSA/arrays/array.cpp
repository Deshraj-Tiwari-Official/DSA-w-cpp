#include <iostream>

using namespace std;

int main() {
  // Arrays are used to store multiple values of the same type in a single
  // variable, they are contiguous in memory.
  int marks[33] = {72, 63, 79, 68, 65, 77, 70, 61, 74, 80, 64,
                   69, 73, 66, 76, 62, 78, 67, 60, 75, 63, 72,
                   64, 68, 79, 61, 74, 77, 65, 73, 66, 62, 76};

  // sizeof(marks) returns the size of the array in bytes
  // sizeof(marks[0]) returns the size of each element in the array in bytes
  // So, sizeof(marks) / sizeof(marks[0]) returns the number of elements in the array
  for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
    cout << marks[i] << endl;
  }
  return 0;
}
