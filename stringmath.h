#ifndef STRINGMATH_H
#define STRINGMATH_H
#include <string>
#include <vector>
const int max {1000*1000*1000};
typedef std::vector<int> Data;
std::string StringSum(std::string s1, std::string s2);
std::string StringMultiply(std::string s1, std::string s2);
std::string Factorial(std::string s);
std::string StringDivide(std::string divident, std::string divider);
std::string Binominal(int m, int n);
Data ToVector(int);
#endif // STRINGMATH_H
