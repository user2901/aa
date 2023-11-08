#include <iostream>
#include <cmath>
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
    int pre = n, next = n;
    int ans = 0;
    while (true) {
        if (isPrime(pre)) {
            ans = pre;
            break;
        }
        else pre--;

        if (isPrime(next)) {
            ans = next;
            break;
        }
        else next++;
    }
    
    cout << ans;
    return 0;
}