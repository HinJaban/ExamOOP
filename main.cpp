#include <iostream>
#include "Class.h"
#include "Class.cpp"




struct Distance      // длина в английской системе
{
int feet;
float inches;
};
////////////////////////////////////////////

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    /* Простой класс */
    /*
    smallobj s1, s2;        // определение двух объектов класса smallobj
    s1.setdata(1066);       // вызовы метода setdata()
    s2.setdata(1776);
    s1.showdata();          // вызовы метода showdata()
    s2.showdata();
    */


/*
    part part1;                        // определение объекта класса part
    part1.setpart(6244, 373, 217.55F); // вызов метода
    part1.showpart();
    // 225, 821    179    824

*/


    Distance d1, d3;     // определения двух переменных
    Distance d2 = { 11, 6.25 };// определение с инициализацией
    /* ввод полей переменной d1 */
    std::cout << "\nВведите число футов: "; std::cin >> d1.feet;
    std::cout << "Введите число дюймов: "; std::cin >> d1.inches;
    /* сложение длин d1 и d2 и присвоение результата d3 */
    d3.inches = d1.inches + d2.inches;// сложение дюймов
    d3.feet = 0;                      // с возможным заемом
    if(d3.inches >= 12.0)             // если сумма больш 12.0
    {
    d3.inches -= 12.0;              // число дюймов на 12.0 и
    // увеличиваем число футов на 1
    d3.feet++;
    }
    d3.feet += d1.feet + d2.feet;   // сложение футов
    /* вывод всех длин на экран */
    std::cout << d1.feet << "\'-" << d1.inches << "\" + ";
    std::cout << d2.feet << "\'-" << d2.inches << "\" = ";
    std::cout << d3.feet << "\'-" << d3.inches << "\"\n";
    return 0;
}