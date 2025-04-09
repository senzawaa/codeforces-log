#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        int prev = 0, mx=0;
        int l, r;
        for (int i = 0; i < n; i++) {
            cin >> l >> r;
            mx = max(l - prev, mx);
            prev = r;
        }
        mx = max(m - prev, mx);
        if (mx >= s) cout << "YES\n";
        else cout << "NO\n";
    }
}