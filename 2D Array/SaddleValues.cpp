#include <iostream>
#define MAX 101
using namespace std;

int maxRow(int a[][MAX], int m, int n, int i) {
    int max = -1;
    for (int j = 0; j < n; j++) {
        if (a[i][j] > max) max = a[i][j];
    }
    return max;
}

int minCol(int a[][MAX], int m, int n, int j) {
    int min = 1001;
    for (int i = 0; i < m; i++) {
        if (a[i][j] < min) min = a[i][j];
    }
    return min;
}

int main() {
    int m,n;
    cin >> m >> n;
    int a[MAX][MAX];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == maxRow(a, m, n, i) && a[i][j] == minCol(a, m, n, j)) cnt++;
        }
    }
    cout << cnt;
    return 0;
}