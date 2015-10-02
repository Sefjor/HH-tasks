#include "task2.h"
#include <iostream>
Task2::Task2(int low, int high) :n_max{low},
  over{high},f(n_max + 1)
{
}

void Task2::Calculate()
  {
    int counter = 0;
    for (int n = 1; n < n_max; ++n)
      for (int k = 2; k < n; ++k)
        if (f.IsFactoredMoreThan(f.Binominal(k, n), over))
            ++counter;
    std::cout << counter;
  }
