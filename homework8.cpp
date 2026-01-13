#include <iostream>
#include <string>
using namespace std;

bool isIsogram(const string& word) {
    int len = word.length();
    for (int i = 0; i < len; ++i) {
        if (word[i] == ' ') continue; // Игнорируем пробелы
        for (int j = i + 1; j < len; ++j) {
            if (word[j] == ' ') continue; // Игнорируем пробелы
            if (word[i] == word[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string word;
    cout << "Введите строку: ";
    getline(cin, word);

    cout << (isIsogram(word) ? "true" : "false") << endl;
    return 0;
}
