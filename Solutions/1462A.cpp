#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int b[n];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int l = 0, r = n - 1;
        int m = 0;
        int a[n];
        int i = 0;
        while (l <= r) {
            if (m++ & 1 ^ 1) {
                a[i++] = b[l++];
            } else {
                a[i++] = b[r--];
            }
        }
        for (int nn : a) cout << nn << ' ';
        cout << '\n';
    }
}