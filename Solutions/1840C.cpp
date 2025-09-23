#include<iostream>
#define int long long
using namespace std;
// int nCr(int n, int r) {
//     double ans = 1;
//     for (int i = 1; i <= r; i++) {
//         ans = ans * (n - r + i) / i;
//     }
//     return ans;
// }

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int l=0, r=0;
        int ans = 0;
        while (r <= n) {
            // cout << "HERE\n";
            if (!(a[r] > q) && r != n) {
                r++;
            } else {
                if (r == n && a[r - 1] > q) break;
                int nn = r - l;
                while (nn >= k) {
                    // cout << "HERE2\n";
                    // cout << ':' << nCr(nn, k) << ';' << l << ' ' << r  << '{' << nn << '\n';
                    ans += nn - k + 1;
                    nn--; 
                }
                l = r + 1;
                r = l;
            }
        }
        cout << ans << '\n';
    }
}