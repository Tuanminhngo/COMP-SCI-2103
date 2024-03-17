#include "Reverser.h"
#include <iostream> // for error output (optional)

int Reverser::reverseDigit(int value) {
  // Error handling for negative input (optional: comment out if not needed)
  if (value < 0) {
    std::cerr << "Error: Input value cannot be negative." << std::endl;
    return -1;  // Indicate error for invalid input
  }

  // Base case: single-digit number
  if (value < 10) {
    return value;
  }

  // Recursive case: extract last digit and reverse remaining digits
  int lastDigit = value % 10;
  int reversedRest = reverseDigit(value / 10);
  return lastDigit * 10 + reversedRest;
}

std::string Reverser::reverseString(std::string characters) {
  // Base case: empty string
  if (characters.empty()) {
    return "";
  }

  // Recursive case: reverse remaining characters and append first character
  std::string reversedRest = reverseString(characters.substr(1));
  return reversedRest + characters[0];
}
