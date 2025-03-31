#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[2];
        cin >> a[0] >> a[1];
        for (int i = 1; i <= 8; i++) {
            if (a[1] - '0' == i) continue;
            cout << a[0] << i << '\n';
        }
        for (int i = 0; i < 8; i++) {
            if (i + 'a' == a[0]) continue;
            cout << char(i + 'a') << a[1] << '\n';
        }
    }
}