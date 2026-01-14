#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Введите число: ";
    cin >> num;

    if (num > 0) {
        cout << "Число положительное" << endl;
    } else if (num < 0) {
        cout << "Число отрицательное" << endl;
    } else {
        cout << "Число равно нулю" << endl;
    }

    return 0;
}
