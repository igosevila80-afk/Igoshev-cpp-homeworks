#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_N = 100;
    int n;
    string arr[MAX_N];
    bool res[MAX_N];

    cout << "Введите количество элементов (не более 100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Ошибка: неверное количество элементов!" << endl;
        return 1;
    }

    cout << "Введите " << n << " строк (только строчные буквы):" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool state = true;
    for (int i = 0; i < n; ++i) {
        res[i] = state;
        if (arr[i] == "flick") {
            state = !state;
        }
    }

    cout << "Результат:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << (res[i] ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}
