#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
  vector<int> result;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[i] + arr[j] == target) {
        // NOTE: This returns the indices of the elements.
        result.push_back(i);
        result.push_back(j);
        // NOTE: This returns the elements of the array.
        // result.push_back(arr[i]);
        // result.push_back(arr[j]);
        return result;
      }
    }
  }
  return result;
}

int main() {
  // Problem: You are given a sorted(ascending/decnding) array of n integers and you have to find two elements such that their sum is equal to a given target number.
  vector<int> asc = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> desc = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  int target = 15;

  vector<int> asc_result = pairSum(asc, target);
  cout << "result[0], result[1] = " << asc_result[0] << ", " << asc_result[1] << endl;

  cout << endl;

  vector<int> desc_result = pairSum(desc, target);
  cout << "result[0], result[1] = " << desc_result[0] << ", " << desc_result[1] << endl;

  return 0;
}
