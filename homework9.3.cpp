#include <iostream>
using namespace std;

// Рекурсивная функция для вычисления факториала
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    cout << "Факториал: " << factorial(n) << endl;
    return 0;
}
