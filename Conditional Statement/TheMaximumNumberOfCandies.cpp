#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ans = a > b ? a : b;
    ans = ans > c ? ans : c;
    ans = ans > d ? ans : d;
    cout << ans;
    return 0;
}