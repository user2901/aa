#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                cout << s[i];
                return 0;
            }
        }
    }
    cout << "null";
    return 0;
}