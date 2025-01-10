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

return 0;
}