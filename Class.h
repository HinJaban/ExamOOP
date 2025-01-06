#ifndef CLASS_H
#define CLASS_H
enum Suit { clubs, diamonds, hearts,spades };
class card
{
  private:
    int number;              // достоинство карты
    Suit suit;               // масть
  public:
    card ()                  // конструктор без аргументов
      { }
                   // конструктор с двумя аргументами
    card (int n, Suit s) : number(n), suit(s)
      { }
    void display();          // вывод карты на экран
    bool isEqual(card);      // результат сравнения карт
};


#endif