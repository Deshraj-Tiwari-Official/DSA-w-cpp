#include <iostream>
// NOTE: This includes all the STL headers but is not recommended as you should know the headers for your STL implementations.
// Also, if you iclude things separately, it makes the code more clean and readable.
// #include <bits/stdc++.h> 
#include <vector>

using namespace std;

int main() {
  // Vectors are like arrays, but they can grow and shrink dynamically. This means that you can add or remove elements from a vector at any time. Their size is not fixed.

  // INFO: There are three ways to create a vector:
  vector<int> numbers; // This creates an empty vector of integers.
  numbers = {1, 2, 3, 4, 5};

  vector<int> marks = {10, 20, 30, 40, 50}; // This creates a vector of integers with the given values.
           //
  vector<char> grades(5, 'B'); // This creates a vector of characters of fixed size with every element set to 'B'.

  // There is a special foreach loop for vectors:
  for (int i : marks) {
    cout << i << " ";
  }
  cout << endl;

  // INFO: Vector functions:
  cout << numbers.size() << endl;
  marks.push_back(60); // Add an element to the end.
  cout << "After push_back: " << marks.size() << endl;
  marks.pop_back(); // Remove the last element.
  cout << marks.front() << endl; // Get the first element.
  cout << marks.back() << endl; // Get the first element.
  cout << marks.at(2) << endl; // Get the element at index 2. Works the same as marks[2].

  return 0;
}
