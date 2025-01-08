#include <iostream>
#include "Class.h"
#include "Class.cpp"
#include <string>
template <class T>
T func(T number)
{
  return 2 * number;
}

int main()
{
  setlocale(LC_ALL, "ru_RU.UTF-8");

  std::cout << func(1000 000 000 000 0L) << std::endl;
}
