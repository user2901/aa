#include <iostream>
using namespace std;

int GCD(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << a/GCD(a, b) << " " << b/GCD(a, b);
    return 0;
}