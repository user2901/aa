#include <iostream>
#include <cmath>
#define MAX 1001
#define MOD 1000003
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

int a[MAX][MAX];

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    long long ans = 1;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i][n-i-1])) {
            ans *= a[i][n-i-1];
            ans %= MOD;
        }
    }
    cout << ans;
    return 0;
}