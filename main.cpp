// строка как класс
#include "Class.h"
#include "Class.cpp"
#include <iostream>
#include <cstring>

///////////////////////////////////////////////////////////
enum { SZ = 80 }; // максимальный размер строки
class String
{
private:
char str [ SZ ];           // сама строка
public: 
String ( )                 // конструктор без параметров
{ str [ 0 ] = '\0'; }
String ( char s [ ] )      // конструктор с одним параметром
{ strcpy ( str, s ); }
void display ( )           // показ строки
{ std::cout << str; }
void concat ( String s2 )  // сложение строк
{
    setlocale(LC_ALL, "ru-RU.UTF-8");
if ( strlen ( str ) + strlen ( s2.str ) < SZ )
strcat ( str, s2.str );
else 
std::cout << "\nПереполнение!";
}
};
///////////////////////////////////////
int main ( )
{
setlocale(LC_ALL, "ru-RU.UTF-8");
String s1 ( "С Новым годом! " ); // конструктор с одним параметром
String s2 = "С новым счастьем!"; // аналогично, но в другой форме
String s3;                       // конструктор без параметров

std::cout << "\ns1="; s1.display ( ); // показываем все строки
std::cout << "\ns2="; s2.display ( );
std::cout << "\ns3="; s3.display ( );

s3 = s1;                         // присвоение
std::cout << "\ns3="; s3.display ( ); 

s3.concat ( s2 );                // сложение
std::cout << "\ns3="; s3.display ( );
std::cout << std::endl;

return 0;
}