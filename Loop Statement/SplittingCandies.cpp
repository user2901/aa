#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    bool ok = true;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x%2 != 0) ok = false;
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}