#include <iostream>
using namespace std;

// Функция увеличивает значение аргумента на 10
void increase(int &x) {
    x += 10;
}

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    increase(n);
    cout << "Новое значение: " << n << endl;
    return 0;
}
