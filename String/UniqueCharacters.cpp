#include <iostream>
using namespace std;

int pos(char x) {
    return (x >= 'a' && x <= 'z') ? x - 'a' + 26 : x - 'A';
}

int main() {
    string s;
    cin >> s;
    int freq[52] = {0};
    for (int i = 0; i < s.length(); i++) freq[pos(s[i])]++;

    int cnt = 0;
    for (int i = 0; i < 52; i++) {
        if (freq[i] != 0) cnt++;
    }
    cout << cnt;
    return 0;
}