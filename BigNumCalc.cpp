#include "BigNumCalc.h"
#include <stdexcept> // Include this for std::invalid_argument

bigNumCalc::bigNumCalc() {
    // Constructor implementation (if needed)
}

bigNumCalc::~bigNumCalc() {
    // Destructor implementation (if needed)
}

std::list<int> bigNumCalc::buildBigNum(const std::string& numString) {
    std::list<int> bigNum;
    for (char ch : numString) {
        if (isdigit(ch)) {  // Ensure the character is a digit
            bigNum.push_front(ch - '0');  // Convert char to int and add to the list
        }
    }
    return bigNum;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.begin();
    auto it2 = num2.begin();
    int carry = 0;

    while (it1 != num1.end() || it2 != num2.end() || carry != 0) {
        int sum = carry;
        if (it1 != num1.end()) {
            sum += *it1;
            ++it1;
        }
        if (it2 != num2.end()) {
            sum += *it2;
            ++it2;
        }
        result.push_back(sum % 10);  // Add the last digit of sum to the result
        carry = sum / 10;            // Calculate the new carry
    }

    return result;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.begin();
    auto it2 = num2.begin();
    int borrow = 0;

    while (it1 != num1.end() || it2 != num2.end()) {
        int diff = (it1 != num1.end() ? *it1 : 0) - (it2 != num2.end() ? *it2 : 0) - borrow;
        borrow = 0;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        }
        result.push_back(diff);

        if (it1 != num1.end()) ++it1;
        if (it2 != num2.end()) ++it2;
    }

    // Remove leading zeros from the result list
    while (!result.empty() && result.back() == 0) {
        result.pop_back();
    }

    if (result.empty()) {
        // If the result is empty, push back a zero to represent zero difference
        result.push_back(0);
    }

    return result;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    if (num2.size() != 1) {
        throw std::invalid_argument("num2 must be a single digit");
    }

    int digit = num2.front();  // The single digit for multiplication
    int carry = 0;
    for (auto it = num1.begin(); it != num1.end(); ++it) {
        int product = *it * digit + carry;
        result.push_back(product % 10);  // Save only the unit place
        carry = product / 10;            // Carry the tens place
    }

    // Handle the last carry if present
    while (carry > 0) {
        result.push_back(carry % 10);
        carry /= 10;
    }

    return result;
}