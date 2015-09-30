#include "task1.h"
#include <iostream>
#include <algorithm>
#include <stringmath.h>
using namespace std;

void Task1::operator()(int low, int high)
{
  int counter {};
  for (int i = low; i < high; ++i)
    if (!PalyndromeCheck(i))
      ++counter;
  cout << "task1: " << counter << endl;
}

bool Task1::PalyndromeCheck(int x)
{
  string s = to_string(x);
  int i = 0;
  bool is_palyndrome = false;
  string s_temp{};
  do {
      s_temp = s;
      reverse(s.begin(), s.end());
      if (s_temp == s)
        is_palyndrome = true;
      s = StringSum(s, s_temp);
      ++i;
    }
  while ((is_palyndrome == false) && (i < 50));
  return is_palyndrome;
}
