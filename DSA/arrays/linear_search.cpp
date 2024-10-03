#include <iostream>

using namespace std;

// Linear Search is one of the most basic searching algorithm. It is used to search for a target element in a list.
int linear_search(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = {4, 2, 7, 1, 8, 3, 5, 6, 8};
  int size = sizeof(arr) / sizeof(arr[0]);

  int target = 80;

  cout << linear_search(arr, size, target) << endl;

  return 0;
}
