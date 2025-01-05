#ifndef CLASS_H
#define CLASS_H
class Counter 
{
private: 
unsigned int count;       // значение счетчика
public:
Counter();                // конструктор
void inc_count();         // инкрементирование счетчика
int get_count();          // получение значения счетчика

};
////////////////////////////////////////////////////

#endif