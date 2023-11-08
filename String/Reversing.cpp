#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char s[1001];
    char words[1000][1001];
    cin.getline(s, 1001);
    int n = strlen(s);

    int cnt = 0; // Biến đếm số lượng từ
    int j = 0; // Biến con trỏ tới vị trí hiện tại trong từ đang xây dựng
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            words[cnt][j] = s[i];
            j++;
        }
        else {
            // Đã xong một từ
            words[cnt][j] = '\0';
            cnt++; // Từ tăng lên 1
            j = 0; // reset về 0
        }
    }

    if (j != 0) {
        // Nếu vẫn còn đang xây dựng dang dở 1 từ
        words[cnt][j] = '\0';
        cnt++;
    }

    for (int i = cnt - 1; i >=0; i--) {
        cout << words[i] << " ";
    }
    return 0;
}