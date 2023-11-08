#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (i == 0 || s[i-1] == ' ') ans += toupper(s[i]);
    }
    cout << ans;
    return 0;
}