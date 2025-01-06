#include <iostream>
#include "Class.h"


const int jack = 11;         // именованные достоинства карт
const int queen = 12; 
const int king = 13;
const int ace = 14;
//--------------------------------------------------------
void card::display()         // вывод карты на экран
{
    setlocale(LC_ALL, "ru-RU.UTF-8");
  if( number >= 2 && number <= 10 )
    std::cout << number ;
  else
    switch(number)
    {
      case jack:   std::cout << "Валет ";  break;
      case queen:  std::cout << "Дама ";   break;
      case king:   std::cout << "Король "; break;
      case ace:    std::cout << "Туз ";    break;
    }
  switch(suit)
  {
    case clubs:     std::cout << "треф"   ;break;
    case diamonds:  std::cout << "бубен"  ;break;
    case hearts:    std::cout << "червей" ;break;
    case spades:    std::cout << "пик"    ;break;
  }
}
//--------------------------------------------------------
bool card::isEqual(card c2)  // сравнение двух карт
{
  return (number==c2.number && suit==c2.suit)? true : false;
}
//////////////////////////////////////////////////////////