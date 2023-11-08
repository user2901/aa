#include <iostream>
#define MAX 100005
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];

    int min = 1001;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
    } 

    int ans = 0;
    for (int i = 0; i < n; i++) ans += a[i] - min;
    cout << ans;
    return 0;
}