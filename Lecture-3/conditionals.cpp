#include <iostream>

int main() {
  int n;
  // BTW you can also do this instead of using namespace std
  std::cout << "Enter a number (positive, negative, or zero): ";
  std::cin >> n;

  try {
    if (n > 0) {
      std::cout << "Positive\n";
    } else if (n < 0) {
      std::cout << "Negative\n";
    } else {
      std::cout << "Zero\n";
    }
  } catch (std::exception e) {
    std::cout << "Invalid input\n";
  }

  // The switch statement is useful when you want to check if a value is equal
  // to one of several values
  char grade;
  std::cout << "Enter your grade (A, B, C, D, or F): ";
  std::cin >> grade;

  switch (grade) {
  case 'A':
    std::cout << "Excellent\n";
    break;
  case 'B':
    std::cout << "Good\n";
    break;
  case 'C':
    std::cout << "Average\n";
    break;
  case 'D':
    std::cout << "Below Average\n";
    break;
  case 'F':
    std::cout << "Fail\n";
    break;
  default:
    std::cout << "Invalid input\n";
  }

  // Guess what is going on
  char letter;
  std::cout << "Enter a letter: ";
  std::cin >> letter;

  if (letter >= 65 && letter <= 90) {
    std::cout << "Uppercase\n";
  } else if (letter >= 97 && letter <= 122) {
    std::cout << "Lowercase\n";
  } else {
    std::cout << "Invalid input\n";
  }

  // Ternary operator
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "You are " << (age >= 18 ? "eligible" : "ineligible") << " to vote\n";
  return 0;
}
