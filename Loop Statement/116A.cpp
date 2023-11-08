#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a,b;
    int s = 0, max = 0;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        s += b - a;
        max = (max > s ? max : s);
    }
    cout << max;
    return 0;
}