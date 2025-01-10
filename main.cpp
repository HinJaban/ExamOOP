// перевод обычных строк в класс String
#include <iostream>
#include <string.h>        // для функций str*
///////////////////////////////////////////////////////////
enum { SZ = 80 };         // максимальный размер строки
class String              
{
private:
char str [ SZ ];           // массив для хранения строки
public: 
        // конструктор без параметров
String ( )
{ str [ 0 ] = '\x0'; }
        // конструктор с одним параметром
String ( char s [ ] )      
{ strcpy ( str, s ); }     // сохраняем строку в массиве
        // показ строки
void display ( ) const          
{ std::cout << str; }
        // перевод строки к обычному типу
operator char* ( )
{ return str; }
};
///////////////////////////////////////
int main ( )
{
    setlocale(LC_ALL, "ru-RU.UTF-8");
String s1;                // используем конструктор без параметров

char xstr [ ] = "Ура, товарищи! "; // создаем обычную строку

s1 = xstr;                // неявно используем конструктор с одним параметром

s1.display ( );           // показываем строку 

String s2 = "Мы победим!";// снова используем конструктор с параметром

std::cout << static_cast<char*> ( s2 ); // используем оператор перевода типа
std::cout << std::endl;

return 0;
}