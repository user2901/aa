#include <iostream>
using namespace std;

bool isValid(string s) {
    int at = 0; // đếm '@'
    int idx = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (s[i] == '@') {
            at++;
            idx = i;
        }
    }
    if (at != 1) return false;

    if (idx == 0 || idx == n-1) return false;

    for (int i = 0; i < idx; i++) {
        if (!isalpha(s[i]) && !isdigit(s[i]) && s[i] != '.' && s[i] != '_') return false;
    }

    for (int i = idx+1; i < n; i++) {
        if (!isalpha(s[i]) && s[i] != '.') return false;
    }

    int dot = 0; // đếm '.'
    for (int i = idx+1; i < n; i++) {
        if (s[i] == '.') dot++;
    }
    if (dot < 1) return false;

    for (int i = idx+1; i < n-1; i++) {
        if (s[i] == '.' && s[i+1] == '.') return false;
    }

    return true;
}

int main() {
    string s;
    getline(cin, s);
    cout << (isValid(s) ? "VALID" : "INVALID");
    return 0;
}