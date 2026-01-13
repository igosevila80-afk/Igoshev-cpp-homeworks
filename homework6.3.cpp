#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Введите строку: ";
    getline(cin, str);

    if (!str.empty()) {
        cout << "Первый символ: " << str[0] << endl;
    } else {
        cout << "Строка пуста!" << endl;
    }

    return 0;
}
