#include <iostream>
#include "Class.h"
#include "Class.cpp"
int main()
{
    smallobj s1, s2;        // определение двух объектов класса smallobj
    s1.setdata(1066);       // вызовы метода setdata()
    s2.setdata(1776);
    s1.showdata();          // вызовы метода showdata()
    s2.showdata();
    return 0;
}