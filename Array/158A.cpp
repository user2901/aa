#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int a[51];
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) break;
        if (a[i] >= a[k-1]) ans++;
    }
    cout << ans;
    return 0;
}