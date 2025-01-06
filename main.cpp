#include <iostream>
#include "Class.h"
#include "Class.cpp"

const int clubs = 0;        // масти
const int diamonds = 1;
const int hearts = 2; 
const int spades = 3;
const int jack = 11;        // достоинства карт
const int queen = 12;
const int king = 13;
const int ace = 14;
////////////////////////////////////////////////
struct card
{
int number;             // доистоинство
int suit;               // масть
};

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
   card temp, chosen, prize;  // три карты
int position;
card card1 = { 7, clubs };     // инициализация карты 1
std::cout << "Карта 1: 7 треф\n";
card card2 = { jack, hearts }; // инициализация карты 2
std::cout << "Карта 2: валет червей\n";
card card3 = { ace, spades };  // инициализация карты 3
std::cout << "Карта 3: туз пик\n ";
prize = card3;                 // запоминание карты 3
std::cout << "Меняем местами карту 1 и карту 3...\n";
temp = card3; card3 = card1; card1 = temp;
std::cout << "Меняем местами карту 2 и карту 3...\n";
temp = card3; card3 = card2; card2 = temp;
std::cout << "Меняем местами карту 1 и карту 2...\n";
temp = card2; card2 = card1; card1 = temp;
std::cout << "На какой позиции (1,2 или 3) теперь туз пик? ";
std::cin>>position;
switch(position) 
{
case 1: chosen = card1; break;
case 2: chosen = card2; break;
case 3: chosen = card3; break;
}
if(chosen.number == prize.number && // сравнение карт
   chosen.suit == prize.suit)
   std::cout << "Правильно! Вы выиграли!\n";
   else
   std::cout << "Неверно. Вы проиграли.\n";
   return 0;
}
// Вызов конструктора