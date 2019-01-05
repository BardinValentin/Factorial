#include <iostream>

using namespace std;

int number;

int Fact (int n);

int main()
{
    setlocale(LC_ALL,"rus");

    cout << "Введите число для вычисления факториала: ";
    cin >> number;
    cout << "Факториал для числа " << number << " = " << Fact(number) << endl << endl; // Fact(number) - функция для вычисления факториала.
}

int Fact (int n)
{
    if (n < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    else if (n == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
    else // во всех остальных случаях
        return n * fact(n - 1); // делаем рекурсию
}