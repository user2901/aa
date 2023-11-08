#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int s = 0;
    s += x%10;
    x /= 10;
    s += x%10;
    x /= 10;
    s += x%10;
    x /= 10;
    s += x%10;
    x /= 10;
    s += x;
    cout << s%10;
    return 0;
}