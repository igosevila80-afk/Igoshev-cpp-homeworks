#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int arr[ROWS][COLS];
    int value = 1;
    int sum = 0;

    // Заполнение массива числами от 1 до 9
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = value;
            value++;
        }
    }

    // Вывод элементов массива и подсчет суммы
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << endl;
    }

    cout << "Сумма элементов: " << sum << endl;

    return 0;
}
