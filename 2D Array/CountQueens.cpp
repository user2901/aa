#include <iostream>
#define MAX 101
using namespace std;

int dx[] = {-1, 1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

int main() {
    int n;
    cin >> n;
    int a[MAX][MAX];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool ok = true;
            for (int k = 0; k < 8; k++) {
                int ni = i, nj = j;

                while (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                    if (a[ni][nj] > a[i][j]) {
                        ok = false;
                        break;
                    }

                    ni += dx[k];
                    nj += dy[k];
                }

                if (!ok) break;
            }

            if (ok) cnt++;
        }
    }
    cout << cnt;
    return 0;
}