// строка как класс
#include <iostream>
#include <string.h>        // для функций strcpy, strcat
#include <stdlib.h>        // для функции exit
///////////////////////////////////////////////////////////
enum { SZ = 80 };         // максимальный размер строки
class String               // наш класс для строк
{
private:

char str [ SZ ];           // сама строка
public: 
        // конструктор без параметров
String ( )
{ strcpy ( str, "" ); }
        // конструктор с одним параметром
String ( char s [ ] )      
{ strcpy ( str, s ); }
        // показ строки
void display ( ) const          
{ std::cout << str; }
String operator+ ( String ss) const
{
setlocale(LC_ALL, "ru-RU.UTF-8");
String temp;                 // временная переменная
if ( strlen ( str ) + strlen ( ss.str ) < SZ)
{
strcpy ( temp.str, str );    // копируем содержимое первой строки
strcat ( temp.str, ss.str ); // добавляем содержимое второй строки
}
else
{
std::cout << "\nПереполнение!";
exit ( 1 );
}
return temp;                 // возвращаем результат
}
};
///////////////////////////////////////


class Distance             // класс английских мер длины
{
private:
int feet;
float inches;
public:
/* конструктор без параметров */
Distance ( ) : feet( 0 ), inches( 0.0 )
{ }
/* конструктор с двумя параметрами */
Distance ( int ft, float in ) : feet ( ft ), inches ( in )
{ }
// получение информации от пользователя
void getdist ( )
{
std::cout << "\nВведите футы: "; std::cin >> feet;
std::cout << "Введите дюймы: "; std::cin >> inches;
}
// показ информации
void showdist()                
{ std::cout << feet << "\'-" << inches << '\"'; }
// сложение двух длин
Distance operator+ ( Distance ) const;
};
//////////////////////////////////////////////////////

// сложение двух длин
Distance Distance::operator+ ( Distance d2 ) const
{
int f = feet + d2.feet;       // складываем футы
float i = inches + d2.inches; // складываем дюймы
if ( i >= 12.0 )              // если дюймов стало больше 12
{
i -= 12.0;                    // то уменьшаем дюймы на 12
f++;                          // и увеличиваем футы на 1
}
return Distance ( f, i );     // создаем и возвращаем временную переменную
}
///////////////////////////////////////////////////



int main ( )
{
setlocale(LC_ALL, "ru-RU.UTF-8");
String s1 ( "С Рождеством! " );// используем конструктор с параметром
String s2 = "С новым годом!";  // Используем конструктор с параметром
String s3;                     // используем конструктор без параметров

// показываем строки
s1.display ( ); 
s2.display ( );
s3.display ( );

s3 = s1 + s2;                  // присваиваем строке s3 результат сложения строк s1 и s2

s3.display ( );                // показываем результат
std::cout << std::endl;
Distance dist1, dist3, dist4;     // определяем переменные
dist1.getdist ( );                // получаем информацию

Distance dist2( 11, 6.25 );       // определяем переменную с конкретным значением
dist3 = dist1 + dist2;            // складываем две переменные

dist4 = dist1 + dist2 + dist3;    // складываем несколько переменных

/* показываем, что же у нас получилось */
std::cout << "dist1 = "; dist1.showdist ( ); std::cout << std::endl;
std::cout << "dist2 = "; dist2.showdist ( ); std::cout << std::endl;
std::cout << "dist3 = "; dist3.showdist ( ); std::cout << std::endl;
std::cout << "dist4 = "; dist4.showdist ( ); std::cout << std::endl;
return 0;
}