#include <iostream>
using namespace std;

int main() {
    int min = 10, max = 0;
    int x;
    while (true) {
        cin >> x;
        if (x == -1) break;
        if (x < min) min = x;
        if (x > max) max = x;
    }
    cout << max << " " << min;
    return 0;
}