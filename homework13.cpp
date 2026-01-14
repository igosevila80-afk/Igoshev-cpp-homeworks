#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Функция для проверки корректности скобочной последовательности
bool isValid(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c); // Открывающую — в стек
        } else {
            if (st.empty()) return false; // Нет открывающей — ошибка
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                st.pop(); // Пара совпала — убираем открывающую
            } else {
                return false; // Не совпала пара — ошибка
            }
        }
    }
    return st.empty(); // Все скобки закрыты — строка корректна
}

int main() {
    string s;
    cout << "Введите строку из скобок: ";
    cin >> s;

    // Ограничение на длину
    if (s.length() < 1 || s.length() > 10000) {
        cout << "Ошибка: длина строки должна быть от 1 до 10000 символов." << endl;
        return 1;
    }
    // Проверим, что используются только допустимые символы
    for (char c : s) {
        if (string("(){}[]").find(c) == string::npos) {
            cout << "Ошибка: допустимы только символы (), {}, []" << endl;
            return 1;
        }
    }

    cout << (isValid(s) ? "true" : "false") << endl;
    return 0;
}
