#include <iostream>
#define MAX 1001
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];

    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    cout << s;
    return 0;
}