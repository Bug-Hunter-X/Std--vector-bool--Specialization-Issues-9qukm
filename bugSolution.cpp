```cpp
#include <iostream>
#include <vector>

int main() {
  // Using std::vector<char> to represent booleans (more efficient and avoids the issues of std::vector<bool>)
  std::vector<char> boolVector(5);

  // Set values
  boolVector[0] = 1; // true
  boolVector[2] = 0; // false

  // Access and print values
  std::cout << "Value at index 0: " << (boolVector[0] != 0) << std::endl; // true
  std::cout << "Value at index 2: " << (boolVector[2] != 0) << std::endl; // false

  return 0;
}
```