// демонстрация создания безопасного массива, проверяющего
// свои индексы при использовании
// используются отдельные функции для установки и получения значения
#include <iostream>
#include <process.h>   // для функции exit
const int LIMIT = 100; // размер массива
///////////////////////////////////////////////////
class safearray
{
    
private:
    int arr[LIMIT];

public:
    // установка значения элемента массива
    void putel(int n, int elvalue)
    {
        setlocale(LC_ALL, "ru-RU.UTF-8");
        if (n < 0 || n >= LIMIT)
        {
            std::cout << "\nОшибочный индекс!";
            exit(1);
        }
        arr[n] = elvalue;
    }
    // получение значения элемента массива
    int getel(int n) const
    {
        setlocale(LC_ALL, "ru-RU.UTF-8");
        if (n < 0 || n >= LIMIT)
        {
            std::cout << "\nОшибочный индекс!";
            exit(1);
        }
        return arr[n];
    }
};
//////////////////////////////////////////////////////
int main()
{
    safearray sa1;
    setlocale(LC_ALL, "ru-RU.UTF-8");

    // задаем значения элементов
    for (int j = 0; j < LIMIT; j++)
        sa1.putel(j, j * 10);

    // показываем элементы
    for (int j = 0; j < LIMIT; j++)
    {
        int temp = sa1.getel(j);
        std::cout << "Элемент " << j << " равен " << temp << std::endl;
    }

    return 0;
}