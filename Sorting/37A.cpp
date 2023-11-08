#include <iostream>
#define MAX 1001
using namespace std;

void InsertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] < x) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}

int main() {
    int n;
    cin >> n;
    int a[MAX], h[1001] = {0};
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (h[a[i]] == 0) cnt++;
        h[a[i]]++;
    }

    InsertionSort(h, 1001);
    cout << h[0] << " " << cnt;
    return 0;
}