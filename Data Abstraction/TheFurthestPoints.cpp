#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    int x, y;
};

double dist(Point a, Point b) {
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int main() {
    Point M;
    int n;
    cin >> M.x >> M.y >> n;
    
    Point p[1001];
    for (int i = 0; i < n; i++) cin >> p[i].x >> p[i].y;

    Point ans = p[0];
    for (int i = 1; i < n; i++) {
        if (dist(M, p[i]) > dist(M, ans)) ans = p[i];
    }
    cout << ans.x << " " << ans.y;
    return 0;
}