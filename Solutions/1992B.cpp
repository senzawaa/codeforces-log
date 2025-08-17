#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[k];
        int mx = 0;
        int ans = 0;
        for (int i = 0; i < k; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
            ans += a[i] + a[i] - 1;
        }
        ans -= mx + mx - 1;
        cout << ans << '\n';
    }
}