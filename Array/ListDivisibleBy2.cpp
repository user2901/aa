#include <iostream>
#define MAX 1001
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i]%2 == 0) cout << a[i] << "\n";
    }
    return 0;
}