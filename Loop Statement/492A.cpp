#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        s += i*(i+1)/2;
        if (s >= n) {
            ans = s == n ? i : i - 1;
            break;
        }
    }
    cout << ans;
    return 0;
}