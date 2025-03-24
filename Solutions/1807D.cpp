#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n];
        int sm[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sm[i] = i == 0 ? a[i] : (sm[i-1] + a[i]);
        }
        // for (auto nn : sm) cout << nn << ' ';
        n--;
        // cout << '\n';
        for (int i = 0; i < q; i++) {
            int l, r, k;
            cin >> l >> r >> k;
            l--; r--;
            // cout << sm[n] << ' ' << (r == 0 ? 0 : sm[r-1]) << ' ' << (l == 0 ? 0 : sm[l-1]) << ' ' << k * (r-l+1) << '\n';
            // cout << sm[n] - (r == 0 ? 0 : sm[r-1]) + (l == 0 ? 0 : sm[l-1]) + k * (r-l+1) << '\n';
            if ((sm[n] - sm[r] + (l == 0 ? 0 : sm[l-1]) + k * (r-l+1)) & 1) {
                cout << "YES\n";    
            } else cout << "NO\n";
        }
    }
}