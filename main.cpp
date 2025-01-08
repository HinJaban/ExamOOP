#include <iostream>
#include "Class.h"
#include "Class.cpp"
#include <string>
class Car
{

private:
  int velocity;

public:
  class InchesEx
  {
    public:

    std::string origin;
    int iValue;
    InchesEx(std::string or, int in)
    {
      origin = or;
      iValue = in;
    }
  };

  // конструктор по умолчанию
  Car() : velocity(0) {};
  // конструктор с одним параметром
  Car(int v)
  {
    if (v > 120)
    {
      throw InchesEx("Конструктор с одним аргументом", v); // Если скорость больше 120
    velocity = 120;
    }
    else velocity = v;
  };
  int getVelocity()
  {
    return velocity;
  }
  void setVelocity(int v)
  {
    // условие исключения
    if (v > 120)
    {
      throw InchesEx("функция setVelocity()", v); // генерируется исключения
    velocity = 120;
    }
    else velocity = v;
  }
};

int main()
{

  setlocale(LC_ALL, "ru_RU.UTF-8");
  Car Maz;
  int v = 130;
  try
  {
    std::cout << "Скорость Car : " << Maz.getVelocity() << std::endl;
    Maz.setVelocity(v);
    std::cout << "Скорость Car : " << Maz.getVelocity() << std::endl;
    }

  catch (Car::InchesEx ix )
  {
    std::cout << "\nОшибка инициализации. Виновник: " << ix.origin << ".\n Введенное значение скорости " << ix.iValue<< " слишком большое. ";
  }
  Maz.setVelocity(v);
  std::cout << "Скорость Car : " << Maz.getVelocity() << std::endl;
}
