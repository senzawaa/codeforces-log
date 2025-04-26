#include<iostream>
#define int long long
using namespace std;
const int mxN = 1e18;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int sm = 0;
        for (int i = 0; i < n;) {
            bool pos = (a[i] > 0);
            int mx = a[i];
            int j = i+1;
            while (j < n && (a[j] > 0) == pos) {
                mx = max(mx, a[j]);
                ++j;
            }
            sm += mx;
            i=j;
        }
        cout << sm << '\n';
    }
}
// tle :(
// const int mxN = 1e18;
// int n;
// int kmx;
// int a[(const int )(2e5+1)];
// int32_t main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         kmx = 1;
//         int mx = -mxN;
//         auto dfs = [&](auto&& dfs, bool ng, int sm=0, int k=0, int pos=0) -> int {
//             if (k == kmx) {
//                 return sm;
//             } else if (k >= kmx || pos == n) {
//                 return -mxN;
//             }
//             if (ng ? (a[pos] < 0) : (a[pos] > 0)) {
//                 return max(dfs(dfs,ng ^ 1, sm + a[pos], k + 1, pos + 1), dfs(dfs, ng, sm, k, pos + 1));
//             }
//             return dfs(dfs, ng, sm, k, pos+1);
//         };
//         for (bool ng : {true, false}) {
//             int c = 0;
//             for (int i = 0; i < n; i++) {
//                 if (ng ? (a[i] < 0) : (a[i] > 0)) {c++; ng ^= 1;}
//             }
//             kmx = max(kmx, c);
//         }
//         cout << max(dfs(dfs, true, 0, 0, 0), dfs(dfs, false, 0, 0, 0)) << endl;
//     }
// }