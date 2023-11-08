#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[24];
    for (int i = 0; i < n; i++) cin >> a[i];

    bool ok = true;
    if (a[n-1] == 0) ok = false;
    else {
        for (int i = 0; i < n-3; i++) {
            if (a[i] == 0 && a[i+1] == 0 && a[i+2] == 0 && a[i+3] == 0) {
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}