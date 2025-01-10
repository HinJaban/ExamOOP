// перегрузка операции +=
#include <iostream>
//////////////////////////////////////////////////////
class Distance             // класс английских мер длины
{
private:
int feet;
float inches;
public:
                // конструктор без параметров 
Distance ( ) : feet( 0 ), inches( 0.0 )
{ }
                // конструктор с двумя параметрами 
Distance ( int ft, float in ) : feet ( ft ), inches ( in )
{ }
                // получение информации от пользователя
void getdist ( )
{
setlocale(LC_ALL, "ru-RU.UTF-8");
std::cout << "\nВведите футы: "; std::cin >> feet;
std::cout << "Введите дюймы: "; std::cin >> inches;
}
                // показ информации
void showdist()                
{ std::cout << feet << "\'-" << inches << '\"'; }
                // сложение с присвоением
Distance operator+= ( Distance );
};
//////////////////////////////////////////////////////

// сложение двух длин
Distance Distance::operator+=( Distance d2 )
{
feet += d2.feet;              // складываем футы
inches += d2.inches;          // складываем дюймы
if( inches >= 12.0 )          // если дюймов больше 12
{
inches -= 12.0;               // то уменьшаем дюймы на 12
feet++;                       // увеличиваем футы на 1
}
return Distance ( feet, inches );
}
///////////////////////////////////////////////////
int main()
{
setlocale(LC_ALL, "ru-RU.UTF-8");
Distance dist1;                   // определяем переменную
dist1.getdist ( );                // и вводим информацию
std::cout << "\ndist1 = "; dist1.showdist ( );

Distance dist2 ( 11, 6.25 );      // описываем и инициализируем другую переменную
std::cout << "\ndist2 = "; dist2.showdist ( );

Distance dist3; 
dist3 = dist1 +=dist2; // dist3 = dist1 + dist2                  
std::cout << "\nПосле добавления:";

std::cout << "\ndist3 = "; dist3.showdist ( );
std::cout << std::endl;

return 0;
}