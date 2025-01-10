#include <iostream>
class Distance // класс английских мер длины
{
private:
    const float MTF; // коэффициент перевода метров в футы
    int feet;
    float inches;

public:
    // конструктор без параметров
    Distance ( ) : feet(0), inches(0.0), MTF(3.280833F)
    {
    }
    // конструктор с одним параметром
    // переводящий метры в футы и дюймы
    Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;   // переводим в футы
        feet = int(fltfeet);            // берем число полных футов
        inches = 12 * (fltfeet - feet); // остаток - это дюймы
    }
    // конструктор с двумя параметрами
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
    {
    }

    // получение информации от пользователя
    void getdist ( )
    {
        std::cout << "\nВведите футы: ";
        std::cin >> feet;
        std::cout << "Введите дюймы: ";
        std::cin >> inches;
    }
    // показ информации
    void showdist ( ) const
    {
        std::cout << feet << "\'-" << inches << '\"';
    }
    // оператор перевода для получения метров из футов
    operator float ( ) const
    {
        float fracfeet = inches / 12;         // переводим дюймы в футы
        fracfeet += static_cast<float>(feet); // добавляем целые футы
        return fracfeet / MTF;                // переводим в метры
    }
};
//////////////////////////////////////////////////
int main()
{
    float mtrs;
    Distance dist1 = 2.35F; // используется конструктор, переводящий метры в футы и дюймы

    std::cout << "\ndist1 = ";
    dist1.showdist();
    mtrs = static_cast<float>(dist1); // используем оператор перевода в метры

    std::cout << "\ndist1 = " << mtrs << " meters\n";

    Distance dist2(5, 10.25); // используем конструктор с двумя параметрами

    mtrs = dist2; // неявно используем перевод типа
    std::cout << "\ndist2 = " << mtrs << " meters\n";

    // dist2 = mtrs; //а вот это ошибка - так делать нельзя
    return 0;
}