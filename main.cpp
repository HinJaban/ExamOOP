#include <iostream>
#include "Class.h"
#include "Class.cpp"


int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    Distance dist1(11,6.25);   // определение и инициализация
Distance dist2(dist1);     //два конструктора
Distance dist3 = dist1;    //с одним аргументом
/* вывод всех длин */
std::cout << "\ndist1 = "; dist1.showdist();
std::cout << "\ndist2 = "; dist2.showdist();
std::cout << "\ndist3 = "; dist3.showdist();
std::cout << std::endl;
return 0;
}
// Вызов конструктора