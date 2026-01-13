#include <iostream>
#include <cstdlib>  // для функции rand()
#include <ctime>    // для функции time()
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    // Инициализация генератора случайных чисел
    srand(time(0));

    // Заполнение массива случайными числами от 0 до 9
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 10;
    }

    // Вывод элементов массива
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
