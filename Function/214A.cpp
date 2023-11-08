#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int cnt = 0;

    for (int i = 0; i <= m && i*i <= n; i++) {
        int j = n - i*i;
        if (i + j*j == m) cnt++;
    }
    cout << cnt;
    return 0;
}