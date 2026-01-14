#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите размер массива: ";
    cin >> N;

    // Ограничение на размер массива
    if (N < 1 || N > 100) {
        cout << "Ошибка: размер массива должен быть от 1 до 100." << endl;
        return 1;
    }

    int arr[100];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Введите число x: ";
    cin >> x;

    int result = -1;
    for (int i = 0; i < N; ++i) {
        if (arr[i] == x) {
            result = i;
            break;
        }
    }

    cout << "Индекс искомого элемента: " << result << endl;

    return 0;
}
