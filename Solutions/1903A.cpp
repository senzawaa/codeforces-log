#include<iostream>
// #include<unordered_map>
// #define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (k == 1) {
            // int bw = 0;
            // for (int i = 0; i < n; i++) {
            //     bw ^= a[i];
            // }
            // if (bw == a[0] || bw == 0) {
            //     cout << "YES\n";
            // } else cout << "NO\n";
            int prev = a[0];
            bool ok = 0;
            for (int i = 1; i < n; i++) {
                if (prev > a[i]) {
                    cout << "NO\n";
                    ok = 1;
                    break;
                }
                prev = a[i];
            }
            if (!ok) cout << "YES\n";
        } else cout << "YES\n";
    }
}