#include <iostream>
using namespace std;

int remove0(int n) {
    int res = 0;
    int k = 1;
    while (n > 0) {
        int x = n%10;
        if (x != 0) {
            res = res + x*k;
            k *= 10;
        }
        n /= 10;
    }
    return res;
}

int main() {
    int a,b;
    cin >> a >> b;
    if (remove0(a) + remove0(b) == remove0(a+b)) cout << "YES";
    else cout << "NO";
    return 0;
}