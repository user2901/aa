#include <iostream>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    cout << max(abs(s[0] - t[0]), abs(s[1] - t[1])) << "\n";
    
    while (s != t) {
        if (s[0] < t[0]) {
            cout << "R";
            s[0]++;
        }
        else if (s[0] > t[0]) {
            cout << "L";
            s[0]--;
        }
        if (s[1] < t[1]) {
            cout << "U";
            s[1]++;
        }
        else if (s[1] > t[1]) {
            cout << "D";
            s[1]--;
        }
        cout << "\n";
    }
    return 0;
}