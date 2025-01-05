#include <iostream>
#include "Class.h"
#include "Class.cpp"
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

   part part1;             // определение объекта класса part
   part1.setpart(6244, 373, 217.55F); // вызов метода
   part1.showpart();  
//225, 821
    return 0;
}