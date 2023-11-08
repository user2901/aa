#include <iostream>
using namespace std;

int maxDigit(int n) {
    int max = -1;
    while (n > 0) {
        if (max < n%10) max = n%10;
        n /= 10;
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    cout << maxDigit(n);
    return 0;
}