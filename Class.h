#ifndef CLASS_H
#define CLASS_H
/* ---------- Простейший класс ---------- */
class smallobj                       //определение класса
{
    private:
       int somedata;                 //поле класса
    public:
       void setdata(int d);          //метод класса, изменяющий значение поля
       void showdata();              //метод класса, отображающий значение поля
       
};

class part         // определение класса
{
private:
int modelnumber;   // номер изделия
int partnumber;    // номер детали
float cost;        // стоимость детали
public:
/* установка данных */
void setpart(int mn, int pn, float c);
/* вывод данных */
void showpart();
};
#endif