#include <iostream>
using namespace std;

// Функция, возвращающая квадрат числа
int square(int x) {
    return x * x;
}

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    cout << "Квадрат: " << square(n) << endl;
    return 0;
}
