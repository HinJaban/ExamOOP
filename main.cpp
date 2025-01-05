#include <iostream>
#include "Class.h"
#include "Class.cpp"



/*
struct Distance      // длина в английской системе
{
int feet;
float inches;
};
////////////////////////////////////////////
*/

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    Distance dist1, dist2;            // две длины
dist1.setdist(11,6.25);        //установка значений для d1
dist2.getdist();               // ввод значений для dist2
/* вывод длин на экран */
std::cout << "\ndist1 = "; dist1.showdist();
std::cout << "\ndist2 = "; dist2.showdist();
std::cout << std::endl;

    return 0;
}
