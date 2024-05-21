#include <iostream>
#include <cmath> // для використання sqrt і log
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
    SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення
    // Вихідні дані
    double a = 5.0;
    double b = 2.0;
    double c = 5.4;

    // Перевірка вхідних даних
    if (a <= 0) {
        cerr << "Помилка: Значення 'a' повинно бути більше 0." << endl;
        return 1;
    }
    if (a == 1) {
        cerr << "Помилка: Значення 'a' не повинно дорівнювати 1, оскільки ln(1) = 0." << endl;
        return 1;
    }

    // Обчислення значення функції
    double y = sqrt((b * c + a * a) / log(a));

    // Виведення результату
    cout << "Значення функції y: " << y << endl;

    // Виведення інформації про програму та автора
    cout << "Проект: Обчислення значення функції" << endl;
    cout << "Автор: Туна Деніз Мехметович" << endl;
    cout << "Завдання: Обчислення значення функції y = sqrt((b*c + a*a) / ln(a))" << endl;

    return 0;
}
