#include <iostream>
#include "Class.h"

void smallobj::setdata(int d)           //метод класса, изменяющий значение поля
    {
        somedata = d; 
    }
void smallobj::showdata()               //метод класса, отображающий значение поля
    {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    std::cout << "Значение поля равно " << somedata << std::endl; 
    }
    
/* установка данных */
void part:: setpart(int mn, int pn, float c)
{
modelnumber = mn;
partnumber = pn;
cost = c;
}
/* вывод данных */
void part:: showpart()     // вывод данных
{
setlocale(LC_ALL, "ru_RU.UTF-8");
std::cout << "Модель " << modelnumber;
std::cout << ", деталь " << partnumber;
std::cout << ", стоимость $" << cost << std::endl;
}