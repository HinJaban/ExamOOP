#ifndef CLASS_H
#define CLASS_H
class Distance             //длина в английской системе
{
private:
int feet;
float inches;
public:
/* конструктор без аргументов */
Distance() : feet(0), inches(0.0)
{   }
/* конструктор с двумя аргументами */
Distance(int ft, float in) : feet(ft), inches(in)
{   }

void getdist()                // ввод длины пользователем
{
std::cout << "\nВведите число футов: "; std::cin >> feet;
std::cout << "Введите число дюймов: "; std::cin >> inches;
}
void showdist()                 // вывод длины на экран
{ std::cout << feet << "\'-" << inches << '\"'; }
void add_dist(Distance, Distance); //прототип
};
////////////////////////////////////////////////////

#endif