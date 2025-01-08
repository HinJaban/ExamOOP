#include <iostream>
#include "Class.h"
#include "Class.cpp"
#include <string>
#include <iostream>
class Distance             // класс английских мер расстояний
{
private: 
int feet;
float inches;
public:
class InchesEx        // класс исключений
{
public:
std::string origin;        // для имени функции
float iValue;         // для хранения ошибочного
                      // значения
InchesEx(std::string or, float in) // конструктор
                              // с двумя аргументами
{
origin = or;                  // сохраненная строка
                              // с именем виновника ошибки
iValue = in;                  // сохраненное неправильно
                              // значение дюймов
}
};

//---------------------------------------------------------
Distance()                 // конструктор (без аргументов)
{ feet = 0; inches = 0.0; }
//---------------------------------------------------------
Distance(int ft, float in) // конструктор (2 аргумента)
{
if(in >= 12.0)             // если дюймы указаны неверно,
throw InchesEx("Конструктор с двумя аргументами", in);
feet = ft;
inches = in;
}
//----------------------------------------------------------
void getdist()                // получить данные от пользователя
{
std::cout << "\nВведите число футов: "; std::cin >> feet;
std::cout << "Введите число дюймов: "; std::cin >> inches;
if(inches >= 12.0) //Если дюймы неправильные,
throw InchesEx("функция getdist()", inches);
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
Distance dist1(17, 3.5);   // конструктор с двумя
                           // аргументами
Distance dist2;            // конструктор (без аргументов)
dist2.getdist();           // получить расстояние
                           // вывести расстояния
std::cout << "\ndist1 = "; dist1.showdist();
std::cout << "\ndist2 = "; dist2.showdist();
}
catch(Distance::InchesEx ix) // обработчик ошибок
{
std::cout << "\nОшибка инициализации: "
"значение дюймов превышает предельно допустимое. ";
}
std::cout<<std::endl;
return 0;
}

