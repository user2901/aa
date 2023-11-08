#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if (a == b) return a;
    return a > b ? GCD(a-b, b) : GCD(a, b-a);
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}