#include <iostream>
#include "Class.h"
#include "Class.cpp"




//////////////////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL, "ru-RU.UTF-8");
  card temp, chosen, prize;  // 3 карты
  int position;
  card card1(7, clubs);      // определение и инициализация card1
  std::cout << "\nКарта 1: ";
  card1.display();           // вывод card1
  card card2(jack, hearts);  // определение и инициализация card2
  std::cout <<  "\nКарта 2: ";
  card2.display();           // вывод card2
  card card3(ace, spades);   // определение и инициализация card3
  std::cout <<  "\nКарта 3: ";
  card3.display();           // вывод card3
  prize = card3;             // карту prize будет необходимо угадать
  std::cout << "\nМеняем местами карты 1 и 3...";
  temp = card3; card3 = card1; card1 = temp;
  std::cout << "\nМеняем местами карты 2 и 3...";
  temp = card3; card3 = card2; card2 = temp;
  std::cout << "\nМеняем местами карты 1 и 2...";
  temp = card2; card2 = card1; card1 = temp;
  std::cout << "\nНа какой позиции (1,2 или 3) теперь ";
  prize.display();           // угадываемая карта
  std::cout << "?";
  std::cin >> position;           // ввод позиции игроком
  switch (position)
  {                          // chosen – карта на позиции,
    case 1:chosen = card1; break; // выбранной игроком
    case 2:chosen = card2; break;
    case 3:chosen = card3; break;
  }
  if(chosen.isEqual(prize))       // сравнение карт
    std::cout << "Правильно! Вы выиграли!";
  else
    std::cout << "Неверно. Вы проиграли.";
   std::cout << " Вы выбрали карту ";
  chosen.display();               // вывод выбранной карты
  std::cout << std::endl;
  return 0;
}