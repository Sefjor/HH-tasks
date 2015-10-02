#ifndef TASK2_H
#define TASK2_H
#include "factorizator.h"

class Task2
{
public:
  Task2(int, int);
  void Calculate();

private:
  int n_max, over;
   Factorizator f;
};

#endif // TASK2_H
