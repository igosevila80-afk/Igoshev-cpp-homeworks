#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    // Запрашиваем у пользователя первое число
    cout << "Введите первое число: ";
    cin >> num1;

    // Запрашиваем у пользователя второе число
    cout << "Введите второе число: ";
    cin >> num2;

    // Вычисляем сумму, разность и произведение
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    // Выводим результаты на экран
    cout << "Сумма: " << sum << endl;
    cout << "Разность: " << difference << endl;
    cout << "Произведение: " << product << endl;

    return 0;
}
