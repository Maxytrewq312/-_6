#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int size; // Задаем переменную для размерности массива, вводимой с клавиатуры
    int* a;
    int summ = 0;
    cout << "Введите количество элеменетов массива от 1 до 100" << endl;
    cin >> size;
    a = new int[size]; // создаем массив из количества элементов, который ввел пользователь
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i + 1 << "]" << ": "; // выводим на консоль номер элемента и просим пользователя написать его значение
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        summ = summ + a[i];
    }
    cout << "Сумма элементов массива = " << summ << endl;
    system("pause");
}
