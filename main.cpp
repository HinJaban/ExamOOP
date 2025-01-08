#include <iostream>
#include "Class.h"
#include "Class.cpp"
#include <string>


int main() 
{
setlocale(LC_ALL, "ru_RU.UTF-8");
const unsigned long SIZE = 10000; // объем памяти
char* ptr;                        // указатель на адрес в памяти

try
{
ptr = new char[SIZE];             // разместить в памяти SIZE байт
}
catch(std::bad_alloc)                  // обработчик исключений
{
std::cout << "\n Исключение bad_alloc: невозможно разместить данные в памяти.\n";
return(1);
}
delete[] ptr;                     // освободить память
std::cout << "\nПамять используется без сбоев.\n";
return 0;
}

