#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> symbols = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int res = 0;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        int val = symbols[s[i]];
        if (i + 1 < n && val < symbols[s[i + 1]]) {
            res -= val;
        } else {
            res += val;
        }
    }
    return res;
}

int main() {
    string s = "III";
    cout << "Входное число: " << s << endl;
    cout << "Результат: " << romanToInt(s) << endl; // Должно быть 3
    return 0;
}
