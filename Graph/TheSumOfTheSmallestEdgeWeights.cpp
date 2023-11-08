#include <iostream>
#define MAX 1000005
using namespace std;

struct Edge
{
    int u, v, w;
};

Edge ed[MAX];

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) cin >> ed[i].u >> ed[i].v >> ed[i].w;

    int min = 1001;
    for (int i = 0; i < m; i++) {
        if (ed[i].w < min) min = ed[i].w;
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        if (ed[i].w == min) ans += ed[i].w;
    }
    cout << ans;
    return 0;
}