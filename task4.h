#ifndef TASK4_H
#define TASK4_H
#include <string>

class Task4
{
public:
  Task4();
  void Calculate(int low, int high);
private:
  bool IsEqualAfterPermutation(std::string s1, std::string s2);
};

#endif // TASK4_H
