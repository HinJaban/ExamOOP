#include <iostream>
#include "Class.h"
#include "Class.cpp"


int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
   Counter c1, c2;          // определение с инициализацией
std::cout << "\nc1=" << c1.get_count();  // вывод
std::cout << "\nc2=" << c2.get_count();
c1.inc_count();          // инкрементирование c1
c2.inc_count();          // инкрементирование c2
c2.inc_count();          // инкрементирование c2
std::cout << "\nc1=" << c1.get_count();  // вывод
std::cout << "\nc2=" << c2.get_count();
std::cout << std::endl;
    return 0;
}
