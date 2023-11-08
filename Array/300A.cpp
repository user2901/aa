#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++) cin >> a[i];

    int b[101], c[101], d[101];
    int m = 0, k = 0, p = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) b[m++] = a[i];
        else if (a[i] > 0) c[k++] = a[i];
        else d[p++] = a[i];
    }

    if (k == 0) {
        c[k] = b[m-1];
        c[k+1] = b[m-2];
        k += 2;
        m -= 2;
    }

    if (m%2 == 0) {
        d[p] = b[m-1];
        p++;
        m--;
    }

    cout << m << " ";
    for (int i = 0; i < m; i++) cout << b[i] << " ";
    cout << "\n";

    cout << k << " ";
    for (int i = 0; i < k; i++) cout << c[i] << " ";
    cout << "\n";

    cout << p << " ";
    for (int i = 0; i < p; i++) cout << d[i] << " ";
    return 0;
}