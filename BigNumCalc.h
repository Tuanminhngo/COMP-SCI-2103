#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include <list>
#include <string>

class bigNumCalc {
public:
    bigNumCalc();  // Default constructor
    ~bigNumCalc(); // Destructor

    std::list<int> buildBigNum(const std::string& numString);
    std::list<int> add(std::list<int> num1, std::list<int> num2);
    std::list<int> sub(std::list<int> num1, std::list<int> num2);  // Method to subtract num2 from num1
    std::list<int> mul(std::list<int> num1, std::list<int> num2);
};

#endif // BIGNUMCALC_H
