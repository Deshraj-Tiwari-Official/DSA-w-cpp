#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;

  // Basically, when the capacity is reached, the vector is doubled in size.
  // Let's say the capacity is 2 and you do a pushback, then the capacity would become 4 while the size would be 3.

  v.push_back(44);
  cout << "Size: " << v.size() << " ,";
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(91);
  cout << "Size: " << v.size() << " ,";
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(28);
  cout << "Size: " << v.size() << " ,";
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(73);
  cout << "Size: " << v.size() << " ,";
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(56);
  cout << "Size: " << v.size() << " ,";
  cout << "Capacity: " << v.capacity() << endl;
  return 0;
}
