#include <iostream>
using namespace std;

int main() {
    int length, width;

    cout << "Введите длину: ";
    cin >> length;

    cout << "Введите ширину: ";
    cin >> width;

    int perimeter = 2 * (length + width);
    int area = length * width;

    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;

    return 0;
}
