#include <iostream>
using namespace std;

bool isRevert(int n) {
    int tmp = n;
    int rev = 0;
    while (tmp > 0) {
        rev = rev*10 + tmp%10;
        tmp /= 10;
    }
    return n == rev;
}

int main() {
    int n;
    cin >> n;
    cout << (isRevert(n) ? "YES" : "NO");
    return 0;
}