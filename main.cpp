#include <task1.h>
#include <task2.h>
#include <task3.h>
#include <stringmath.h>
#include <iostream>
int main()
{
  //  Если мы возьмем 47, перевернем его и сложим, получится число 121 — палиндром.
  //  Найдите количество положительных натуральных чисел меньших 13258 таких, что из них нельзя получить палиндром за 50 или менее применений описанной операции.
  // Task1 task_1;
  // task_1(1 , 13258);
  std::cout << std::endl;

  // Для какого количества пар n и k, при условии 1<=n<126 и 1<=k<n, число сочетаний из n по k больше 1000000?
 // Task2 task_2(126, 1000*1000);
 // task_2.Calculate(); //Возможные оптимизации: Обратный порядок цикла в if_factored. Преподсчет факториалов.
   std::cout << std::endl;
  //Найдите сумму всех цифр в 201!
   Task3 task_3;
   task_3.Calculate(201);
}
