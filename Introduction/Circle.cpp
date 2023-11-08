#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float r;
    cin >> r;
    cout << fixed << setprecision(2) << 2*r*3.14 << "\n" << r*r*3.14;
    return 0;
}