#include <iostream>
#define MAX 1001
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    cout << max;
    return 0;
}