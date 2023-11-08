#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x,t;
    float a;
    cin >> x >> a >> t;
    cout << fixed << setprecision(2) << x*a + t;
    return 0;
}