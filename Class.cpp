#include <iostream>
#include "Class.h"
// сложение длин d2 и d3
void Distance::add_dist(Distance d2, Distance d3)
{
inches = d2.inches + d3.inches;    // сложение дюймов
feet = 0;                      // с возможным заемом
if(inches >= 12.0)       // если число дюймов больше 12.0,
{
inches -= 12.0;          // на 12.0  и увеличиваем
feet++;                  // число футов на 1
}
feet += d2.feet + d3.feet;// сложение футов
}