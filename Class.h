#ifndef CLASS_H
#define CLASS_H
class Distance             //длина в английской системе
{
private:
int feet;
float inches;
public:
void setdist( int ft, float in ); // установка значений полей
void getdist();                  // ввод полей с клавиатуры
void showdist();                 // вывод полей на экран

};
////////////////////////////////////////////////////

#endif