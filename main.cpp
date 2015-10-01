#include <task1.h>
#include <task2.h>
#include <stringmath.h>
#include <iostream>
int main()
{
 // Task1 task_1;
 // task_1(1 , 13258);
  //Task2 task_2;
  Factorizator f(127);
  std::cout << (f.IsFactoredLessThan(f.CalculateFactorial(7), 5039) ? "true" : "false");
}
