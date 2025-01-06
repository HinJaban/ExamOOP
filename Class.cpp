#include <iostream>
#include "Class.h"

// сложение данного объекта с d2, возврат суммы
Distance Distance::add_dist(Distance d2)
{
Distance temp;                   // временная переменная
temp.inches = inches + d2.inches;// сложение дюймов
if(temp.inches >= 12.0)         // если сумма больше 12.0
{                               // то уменьшаем её на
temp.inches -= 12.0;            // 12.0 и увеличиваем
temp.feet = 1;                  // число футов на 1
}
temp.feet += feet + d2.feet;    // сложение футов
return temp;
}