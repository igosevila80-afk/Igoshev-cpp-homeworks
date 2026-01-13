#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;
public:
    // Конструктор по умолчанию
    Rectangle() : width(0), height(0) {}

    // Конструктор с параметрами
    Rectangle(double w, double h) : width(w), height(h) {}

    // Сеттеры
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    // Геттеры
    double getWidth() const { return width; }
    double getHeight() const { return height; }

    // Метод show()
    void show() const {
        cout << "Ширина: " << width << endl;
        cout << "Высота: " << height << endl;
    }
};

int main() {
    // Пример использования
    Rectangle r(4.0, 3.0);
    r.show();

    return 0;
}
