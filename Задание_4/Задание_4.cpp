#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int* a;
    int size = sizeof(a) / sizeof(a[0]);; // Задаем переменную для размерности массива, вводимой с клавиатуры, а также осуществляем перебор массива
    int number = 0;
    int min = 20;
    cout << "Введите количество элеменетов массива от 1 до 30" << endl;
    cin >> size;
    a = new int[size]; // создаем массив из количества элементов, который ввел пользователь
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i + 1 << "]" << ": "; // выводим на консоль номер элемента и просим пользователя написать его значение
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
         if (a[i] < min)
         {
             min = a[i];
             number = i;
         }
    }
    cout << "Значение и порядковый номер наименьшего элемента: " << min << "; " << number << endl;
    system("pause");
}

