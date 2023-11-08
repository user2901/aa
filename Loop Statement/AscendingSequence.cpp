#include <iostream>
using namespace std;

int main() {
    int cur, pre = 0;
    bool ok = true;
    while (true) {
        cin >> cur;
        if (cur == 0) break;
        if (cur < pre) ok = false;
        pre = cur;
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}