#ifndef CLASS_H
#define CLASS_H
class smallobj                       //определение класса
{
    private:
       int somedata;                 //поле класса
    public:
       void setdata(int d);          //метод класса, изменяющий значение поля
       void showdata();              //метод класса, отображающий значение поля
       
};


#endif