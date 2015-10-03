#include "task4.h"
#include "stringmath.h"
#include "iostream"
using namespace std;
Task4::Task4()
{
}

void Task4::Calculate(int low, int high)
{
  string result = "1";
   auto s1 =  to_string(low);
  auto s2 =  to_string(high);
  while (!IsEqualAfterPermutation( StringMultiply(result, s1), StringMultiply(result, s2) ) )
    {
      result = StringSum(result, "1");
    }
  cout << "x=" << result << "(" << StringMultiply(result, s1) << "," << StringMultiply(result, s2) << ")";

}

bool Task4::IsEqualAfterPermutation(string s1, string s2)
{
  if (s1.size() != s2.size())
    return false;
  bool is_equal_found{};
  for (auto x : s2)
    {
      is_equal_found = false;
      auto it = s1.begin();
      while (it < s1.end() && !is_equal_found)
        {
          if (x == *it)
            {
              is_equal_found = true;
              s1.erase(it);
            }
          ++it;
        }
      if (!is_equal_found)
       return false;
    }
  return is_equal_found;
}

