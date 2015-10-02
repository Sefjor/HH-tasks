#include "task3.h"
#include <iostream>
using namespace std;
Task3::Task3()
{
}

void Task3::Calculate(int n)
{
  int summarizer = 0;
  for (auto x : Factorial( to_string(n) ))
    summarizer += (x - '0');
  cout << summarizer;
}

