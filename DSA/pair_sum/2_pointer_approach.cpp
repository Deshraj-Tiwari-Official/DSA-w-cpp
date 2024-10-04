#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    vector<int> result;
    int start = 0;
    int end = arr.size() - 1;
    bool isAscending = arr[start] < arr[end];
    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum == target) {
            result.push_back(start);
            result.push_back(end);
            break;
        }
        if (isAscending) {
            if (sum < target) {
                start++;
            } else {
                end--;
            }
        } else {
            if (sum < target) {
                end--;
            } else {
                start++;
            }
        }
    }
    return result;
}

int main() {
    // Problem: You are given a sorted(ascending/descending) array of n integers and you have to find two elements such that their sum is equal to a given target number.
    vector<int> asc = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> desc = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int target = 15;

    vector<int> asc_result = pairSum(asc, target);
    cout << "Ascending array result: indices " << asc_result[0] << ", " << asc_result[1] << endl;

    cout << endl;

    vector<int> desc_result = pairSum(desc, target);
    cout << "Descending array result: indices " << desc_result[0] << ", " << desc_result[1] << endl;

    return 0;
}
