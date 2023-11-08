#include <iostream>
#include <cmath>
#define MAX 1001
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    else if (n > 2) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n%i == 0) return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) cnt++;
    }
    cout << cnt;
    return 0;
}