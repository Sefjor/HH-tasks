//#include <task1.h>
//#include <stringmath.h>
#include <iostream>
#include <factorizator.h>
int main()
{
  //Task1 task_1;
  //task_1(1 , 13258);
 // std::cout << Binominal(4,15);
  Factorizator f{127};
  auto temp = f.Multiply( f.CalculateFactorial(12), f.CalculateFactorial(3) );
  for (auto x : f.Divide(f.CalculateFactorial(15), temp))
       std::cout << x.first << ":" << x.second << std::endl;
}
