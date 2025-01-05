#include <iostream>
#include "Class.h"
Counter::Counter() : count(0)     // конструктор
{ /* пустое тело */ } 
void Counter::inc_count()         // инкрементирование счетчика
{ count++; }
int Counter::get_count()          // получение значения счетчика
{ return count; }