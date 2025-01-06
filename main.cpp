#include <iostream>
#include "Class.h"
#include "Class.cpp"


int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    Distance dist1, dist3;            // две длины
    Distance dist2(11,6.25);   // определение и инициализация
    dist1.getdist();             // ввод значений для dist2
    dist3.add_dist(dist1, dist2); // dist3 = dist1 + dist2
    /* вывод всех длин */
    std::cout << "\ndist1 = "; dist1.showdist();
    std::cout << "\ndist2 = "; dist2.showdist();
    std::cout << "\ndist3 = "; dist3.showdist();
    std::cout << std::endl;
    return 0;
}
// Вызов конструктора