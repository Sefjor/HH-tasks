#include "stringmath.h"
using namespace std;
auto add_leading_zeroes = [](int number_of_zeroes, string s){
    for (int i = 0; i < number_of_zeroes; ++i)
      s = "0" + s;
    return s;
  };

auto sum_prepared_strings = [](string s1, string s2) {
  string result {};
  auto it1 = s1.end();
  auto it2 = s2.end();
  int memory{};
  do {
      int temp = (*(--it1) - '0') + (*(--it2) - '0') + memory;
      result = to_string(temp % 10) + result;
      memory = temp / 10;
    }
  while (it1 != s1.begin());

  if (memory)
    result = to_string(memory) + result;
  return result;
};

string StringSum(string s1, string s2){
  int length_diff = s1.length() - s2.length();
  if (length_diff < 0)
    s1 = add_leading_zeroes(-1 * length_diff, s1);
  else if (length_diff > 0)
    s2 = add_leading_zeroes(length_diff, s2);

  return sum_prepared_strings(s1, s2);
}
string StringMultiply(string s1, string s2){
  string result;
  for (int i = 0; i < stoi(s2); ++i)
    result = StringSum(result, s1);
  return result;
}
string Factorial(string s){
  string fact = "1";
  for (string counter = "1"; counter != StringSum(s, "1"); counter = StringSum(counter, "1"))
    fact = StringMultiply(fact, counter);
  return fact;
}

std::string StringDivide(string divident, string divider){
  string quotient{"0"};
  string result{"0"};
 do{
      result = StringSum(result, divider);
      quotient = StringSum(quotient, "1");
    }
   while (result != divident);
  return quotient;
}



