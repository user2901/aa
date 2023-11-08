#include <iostream>
using namespace std;

int dx[] = {-1, 1, 0, 0, -1, 1, -1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};

bool isValid(int a[][9]) {
    // check hàng
    for (int i = 0; i < 9; i++) {
        int freq[10] = {0};
        for (int j = 0; j < 9; j++) freq[a[i][j]]++;

        for (int k = 1; k <= 9; k++) {
            if (freq[k] != 1) return false;
        }
    }

    // check cột
    for (int j = 0; j < 9; j++) {
        int freq[10] = {0};
        for (int i = 0; i < 9; i++) freq[a[i][j]]++;

        for (int k = 1; k <= 9; k++) {
            if (freq[k] != 1) return false;
        }
    }

    // check các ô xung quanh
    int idx[] = {1, 4, 7};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 8; k++) {
                int ni = idx[i] + dx[k], nj = idx[j] + dy[k];

                if (a[ni][nj] == a[idx[i]][idx[j]]) return false;
            }
        }
    }

    return true;
}

int main() {
    int a[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << (isValid(a) ? "YES" : "NO");
    return 0;
}