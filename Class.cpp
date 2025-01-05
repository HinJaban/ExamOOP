#include <iostream>
#include "Class.h"
void Distance::setdist( int ft, float in ) // установка значений полей
{ feet = ft; inches = in; }
void Distance::getdist()                  // ввод полей с клавиатуры
{
std::cout << "\nВведите число футов: "; std::cin >> feet;
std::cout << "Введите число дюймов: "; std::cin >> inches;
}
void Distance::showdist()                 // вывод полей на экран
{ std::cout << feet << "\'-" << inches << '\"'; }