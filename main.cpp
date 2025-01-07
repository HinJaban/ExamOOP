#include <iostream>
#include "Class.h"
#include "Class.cpp"

#include <iostream>
const int MAX = 100;
//////////////////////////////////////////////////////////
template <class Type>
class Stack
{
private: 
Type st[MAX];       // стек: массив любого типа
int top;
public:
Stack()             // конструктор
{ top = -1; }
void push(Type var) // занести число в стек
{ st[++top] = var; }
Type pop()          // вынуть число из стека
{ return st[top--]; }
};
/////////////////////////////////////////////////////////
int main() 
{
Stack<float> s1;        //s1 - объект класса Stack<float>

s1.push(1111.1F);       // занести 3 значения float
s1.push(2222.2F);       // вытолкнуть 3 значения float;
s1.push(3333.3F);       
std::cout << "1: " << s1.pop() << std::endl;
std::cout << "2: " << s1.pop() << std::endl;
std::cout << "3: " << s1.pop() << std::endl;

Stack<long> s2;         //s2 - объект класса Stack<long>

s2.push(123123123L);    // занести 3 long, вытолкнуть 3 long
s2.push(234234234L);
s2.push(345345345L);
std::cout << "1: " << s2.pop() << std::endl;
std::cout << "2: " << s2.pop() << std::endl;
std::cout << "3: " << s2.pop() << std::endl;
return 0;
}

