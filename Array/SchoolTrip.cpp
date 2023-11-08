#include <iostream>
#define MAX 100005
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];

    int m = 0, w = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) m++;
        else w++;
    }
    cout << (m == w ? "YES" : "NO");
    return 0;
}