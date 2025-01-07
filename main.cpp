#include <iostream>
#include "Class.h"
#include "Class.cpp"
//Шаблон функции вычисления модуля числа 
#include <iostream>
template <class T>         // шаблон функции
T abs(T n)
{
return (n<0) ? -n: n;
}
//-------------------------------------------------------------------
int main()
{
int int1 = 5;
int int2 = -6;
long lon1 = 70000L;
long lon2 = -80000L;
double dub1 = 9.95;
double dub2 = -10.15;
// осуществления вызовов
std::cout << "\nabs(" << int1 << ")=" << abs(int1); //abs(int)
std::cout << "\nabs(" << int2 << ")=" << abs(int2); //abs(int)
std::cout << "\nabs(" << lon1 << ")=" << abs(lon1); //abs(long)
std::cout << "\nabs(" << lon2 << ")=" << abs(lon2); //abs(long)
std::cout << "\nabs(" << dub1 << ")=" << abs(dub1); //abs(double)
std::cout << "\nabs(" << dub2 << ")=" << abs(dub2); //abs(double)
}
