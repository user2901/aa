#include <iostream>
#define MAX 5001
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[MAX], b[MAX];
    for (int i = 0; i <n; i++) cin >> a[i] >> b[i];

    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[idx] || (a[i] == a[idx] && b[i] > b[idx])) idx = i;
    }
    cout << idx+1;
    return 0;
}