#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (i >= 2 && s[i-1] == ' ' && s[i-2] == '.') s[i] = toupper(s[i]);
    }
    cout << s;
    return 0;
}