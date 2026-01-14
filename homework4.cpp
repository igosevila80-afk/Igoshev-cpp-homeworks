#include <iostream>
using namespace std;

int main() {
    double number;

    cout << "Введите число: ";
    cin >> number;

    cout << "Как double: " << number << endl;

    int intNumber = static_cast<int>(number);
    cout << "Как int: " << intNumber << endl;

    bool boolNumber = static_cast<bool>(number);
    cout << "Число не равно 0? " << boolalpha << boolNumber << endl;

    return 0;
}
