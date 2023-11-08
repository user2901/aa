#include <iostream>
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

int main() {
    string s;
    cin >> s;
    int a[100];
    int k = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) a[k++] = s[i] - '0';
    }

    InsertionSort(a, k);
    for (int i = 0; i < k; i++) {
        cout << a[i];
        if (i != k-1) cout << "+";
    }
    return 0;
}