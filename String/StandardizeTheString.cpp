#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            start = i;
            break;
        }
    }

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            end = i;
            break;
        }
    }

    string ans = "";
    for (int i = start; i <= end; i++) {
        if (s[i] == ' ' && s[i-1] == ' ') continue;
        else ans += s[i];
    }
    cout << ans;
    return 0;
}