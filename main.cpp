#include <iostream>
#include "Class.h"
#include "Class.cpp"

#include <iostream>
class Distance             // класс английских мер расстояний
{
private: 
int feet;
float inches;
public:
class InchesEx { };        // класс исключений
//---------------------------------------------------------
Distance()                 // конструктор (без аргументов)
{ feet = 0; inches = 0.0; }
//---------------------------------------------------------
Distance(int ft, float in) // конструктор (2 аргумента)
{
if(in >= 12.0)             // если дюймы указаны неверно,
throw InchesEx();          // генерировать исключение
feet = ft;
inches = in;
}
//----------------------------------------------------------
void getdist()                // ввод длины пользователем
{
std::cout << "\nВведите число футов: "; std::cin >> feet;
std::cout << "Введите число дюймов: "; std::cin >> inches;
if(inches >= 12.0) //Если дюймы неправильные,
throw InchesEx();  // генерировать исключение
}
void showdist()                 // вывод расстояний
{ std::cout << feet << "\'-" << inches << '\"'; }
};
////////////////////////////////////////////////
int main()
{
  setlocale(LC_ALL, "ru-RU.UTF-8");
try 
{
Distance dist1(17, 3.5);   // конструктор (2 аргумента)
Distance dist2;                // конструктор (без аргументов)
dist2.getdist();                // получить расстояние
                    // вывести расстояния
std::cout << "\ndist1 = "; dist1.showdist();
std::cout << "\ndist2 = "; dist2.showdist();
}
catch(Distance::InchesEx) // поймать исключения
{
std::cout << "\nОшибка инициализации: "
"значение дюймов превышает предельно допустимое. ";
}
std::cout<<std::endl;
return 0;
}

