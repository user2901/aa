#include <iostream>
#define MAX 1001
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[MAX];
    bool id[100001];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        id[a[i]] = true;
    }

    int ans = 0;
    for (int i = 1; i <= 100000; i++) {
        if (!id[i]) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}