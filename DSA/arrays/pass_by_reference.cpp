#include <iostream>

using namespace std;

void changeArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = arr[i] * 2;
  }
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]); // IDK why but I love this

  cout << "Original: " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl << endl;
  changeArr(arr, size);

  cout << "New: " << endl;
  // NOTE: This proves that when we pass an arry to a function, it is by default passed by reference and as a pointer. Thus we can change the value of the elements of the array.
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
