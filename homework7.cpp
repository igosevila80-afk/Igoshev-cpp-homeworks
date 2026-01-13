#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false; // Отрицательные числа не палиндромы

    int original = x;
    int reversed = 0;

    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return original == reversed;
}

int main() {
    int x;
    cout << "Введите число: ";
    cin >> x;
    cout << (isPalindrome(x) ? "true" : "false") << endl;
    return 0;
}
