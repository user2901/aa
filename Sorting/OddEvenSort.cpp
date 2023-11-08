#include <iostream>
#define MAX 1001
using namespace std;

void InsertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > x) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}

void Tachmang(int a[], int n, int b[], int &m, int c[], int &k) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) b[m++] = a[i];
        else c[k++] = a[i];
    }
}

int main() {
    int n;
    cin >> n;
    int a[MAX], b[MAX], c[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];

    int m = 0, k = 0;
    Tachmang(a, n, b, m, c, k);
    InsertionSort(b, m);
    InsertionSort(c, k);

    int j1 = 0, j2 = k - 1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) cout << b[j1++] << " ";
        else cout << c[j2--] << " ";
    }
    return 0;
}