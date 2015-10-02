#ifndef FACTORIZATOR_H
#define FACTORIZATOR_H
#include <vector>
#include <map>
typedef std::map <int, int> Factored;
class Factorizator
{
public:
  Factored CalculateFactorial(int z);
  Factorizator(int max);
  Factored Factorize(int);
  Factored Multiply(Factored m_1, Factored m_2);
  Factored Divide(Factored m_1, Factored m_2);
  bool IsFactoredMoreThan(Factored f, int max);
  Factored Binominal(int m, int n);
private:
  int max_num;
  std::vector<int> prime_numbers{};
};

#endif // FACTORIZATOR_H
