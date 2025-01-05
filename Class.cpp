#include <iostream>
#include "Class.h"

void smallobj::setdata(int d)           //метод класса, изменяющий значение поля
       { somedata = d; }
void smallobj::showdata()               //метод класса, отображающий значение поля
       { std::cout << "Значение поля равно " << somedata << std::endl; }