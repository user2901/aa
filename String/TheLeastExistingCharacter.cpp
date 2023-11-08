#include <iostream>
using namespace std;

int pos(char x) {
    return tolower(x) - 'a';
}

int main() {
    int n;
    cin >> n;
    string s;

    while (n--) {
        cin >> s;
        int freq[26] = {0};
        for (int i = 0; i < s.length(); i++) freq[pos(s[i])]++;

        int min = 1001;
        int idx = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0 && freq[i] < min) {
                min = freq[i];
                idx = i;
            }
        }
        cout << (char)(idx + 'A') << "\n";
    }
    return 0;
}