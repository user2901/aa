#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool ok = true;
    if (n < 2) ok = false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) ok = false;
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}