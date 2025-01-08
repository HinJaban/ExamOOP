#include <iostream>
#include "Class.h"
#include "Class.cpp"
#include <string>
class Divide 
{
private:
int a, b, c;
public:
class InchesEx              // класс исключений
{
public:
std::string origin;              // для имени функции
float iValue;               // для хранения ошибочного
                            // значения
InchesEx(std::string or, float in) // конструктор с
                            // двумя аргументами
{
origin = or;                // сохраненная строка
                            // с именем виновника ошибки
iValue = in;                // сохраненное неправильное 
                            // значение дюймов
}
                            // конец класса исключений
};
Divide(): a(0), b(1)
{ 
  c=a/b;
}
Divide(int A, int B): a(A), b(B) 
{ 
  if(B==0)
    throw InchesEx("Конструктор с двумя аргументами", B);
  a=A;
  b=B;
  c=a/b;
}
void setValue(int A, int B)
{
  if(B==0)
    throw InchesEx("Сеттер", B);
  a=A;
  b=B;
}
int getAnswer(){
  return c;
}

};

int main()
{
  setlocale(LC_ALL, "ru_RU.UTF-8");
  try 
  {
    Divide A;
    A.setValue(5,0);
  }
  catch(Divide::InchesEx ix)
  {
std::cout << "\nОшибка инициализации. Виновник: " << ix.origin
<< ".\n Введенное значение делимого " << ix.iValue
<< " равно ноль. ";
  }
return 0;
}
