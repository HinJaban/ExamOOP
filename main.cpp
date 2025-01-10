// демонстрация создания безопасного массива, проверяющего
// свои индексы при использовании
// используется общая функция для установки и получения значения
#include <iostream>
#include <process.h>                 // для функции exit
const int LIMIT = 100;               // размер массива
///////////////////////////////////////////////////////
class safearray
{
private:
int arr [ LIMIT ];
public:
// стоит обратить внимание, что функция возвращает ссылку!
int& access ( int n )
{
    setlocale(LC_ALL, "ru-RU.UTF-8");
if( n < 0 || n >= LIMIT )
{ std::cout << "\nОшибочный индекс!"; exit( 1 ); }
return arr [ n ];
}
};
///////////////////////////////////////////////////////
int main ( )
{
setlocale(LC_ALL, "ru-RU.UTF-8");
safearray sa1;

// задаем значения элементов
for ( int j = 0; j < LIMIT; j++ )
sa1.access ( j ) = j * 10;       // используем функцию слева от знака =

// показываем элементы
for ( int j = 0; j < LIMIT; j++ )
{
int temp =  sa1.access ( j );    // используем функцию справа от знака =
std::cout << "Элемент " << j << " равен " << temp << std::endl;
}

return 0;
}