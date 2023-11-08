#include <iostream>
#define MAX 100005
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    int a[MAX];
    int idx = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == x) idx = i;
    }
    cout << (idx == -1 ? idx : idx+1);
    return 0;
}