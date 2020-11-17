#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int size; // Задаем переменную для размерности массива, вводимой с клавиатуры
    int* a;
    cout << "Введите количество элеменетов массива от 1 до 20" << endl;
    cin >> size;
    a = new int[size]; // создаем массив из количества элементов, который ввел пользователь
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i + 1 << "]" << ": "; // выводим на консоль номер элемента и просим пользователя написать его значение
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
        cout << a[i] << " "; // выводим наш массив поэлементно
    }
    
    system("pause");
}