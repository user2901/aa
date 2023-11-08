#include <iostream>
#define MAX 1001
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}