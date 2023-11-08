#include <iostream>
using namespace std;

bool isPalindrome(string &s, int i, int j) {
    if (i >= j) return true;
    if (s[i] != s[j]) return false;
    return isPalindrome(s, i+1, j-1);
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << (isPalindrome(s, 0, n-1) ? "YES" : "NO");
    return 0;
}