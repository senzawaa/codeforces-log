#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], s[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s[i] = a[i];
        }
        sort(s, s+n, greater<>());
        for (int i = 0; i < n; i++) {
            if (a[i] == s[0]) {
                a[i] -= s[1];
            } else a[i] -= s[0];
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
}