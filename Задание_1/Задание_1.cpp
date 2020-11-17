#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(0,"ru");
    int a[10];
    // заполняем массив с клавиатуры
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]" << ": "; // выводим на консоль номер элемента и просим пользователя написать его значение
        cin >> a[i];
    }
    // выводим заполненный массив.
    cout << "\nВаш массив: ";

    for (int i = 0; i < 10; ++i) {
        cout << a[i] << " "; // выводим наш массив поэлементно
    }
    system("pause");
}

