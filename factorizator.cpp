#include "factorizator.h"
#include <iostream>
using namespace std;

Factorizator::Factorizator(int max) : max_num{max}
{
  for (int i = 2; i <= max_num; ++i){
      bool is_prime = true;
      for (auto x : prime_numbers)
        if (i%x == 0)
          is_prime = false;
      if (is_prime)
        prime_numbers.push_back(i);
    }
}

Factored Factorizator::CalculateFactorial(int z)
{
  Factored temp;
  for (auto i = z; i > 1; --i)
    temp = Multiply(temp, Factorize(i));
  return temp;
}

Factored Factorizator::Multiply(Factored m_1, Factored m_2){
  for (auto x : m_2)
    m_1[x.first] += x.second;
  return m_1;
}
Factored Factorizator::Divide(Factored m_1, Factored m_2){
  for (auto x : m_2)
    m_1[x.first] -= x.second;
  return m_1;
}

bool Factorizator::IsFactoredMoreThan(Factored f, int max)
{
  int temp{1};
  for (auto x : f)
    {
      while (x.second != 0) {
         temp *= x.first;
         if (temp > max)
           return true;
         --x.second;
        }
    }
  return false;
}

Factored Factorizator::Binominal(int m, int n)
{
   auto temp = Multiply( CalculateFactorial(n - m), CalculateFactorial(m) );
   return Divide(CalculateFactorial(n), temp);
}

Factored Factorizator::Factorize(int to_fact)
{
  Factored temp;
  while (to_fact != 1)
    {
      bool is_divider_found = false;
      auto it = prime_numbers.begin();
      while (is_divider_found == false && it < prime_numbers.end())
        {
          if ((to_fact % *it) == 0)
            {
              ++temp[*it];
              to_fact = to_fact / *it;
              is_divider_found = true;
            }
          ++it;
        }
    }
  return temp;
}

