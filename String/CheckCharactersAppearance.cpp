#include <iostream>
using namespace std;

string tolower(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    string s;
    getline(cin, s);
    s = tolower(s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'b' || s[i] == 'i' || s[i] == 'g' || s[i] == 'o') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}