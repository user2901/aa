#include <iostream>
#include <cmath>
#define MAX 10005
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

int firstPrime(int a[], int n, int i) {
    if (i == n) return -1;
    if (isPrime(a[i])) return i;
    return firstPrime(a, n, i+1);
}

int main() {
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << firstPrime(a, n, 0);
    return 0;
}