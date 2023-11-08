#include <iostream>
using namespace std;

int main() {
    int n,m,a;
    cin >> n >> m >> a;
    int w = n%a == 0 ? n/a : n/a+1;
    int h = m%a == 0 ? m/a : m/a+1;
    cout << 1LL*w*h;
    return 0;
}