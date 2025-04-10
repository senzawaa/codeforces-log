#include<iostream>
#define int long long
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        int mn = (k * (k + 1)) / 2;
        int mx = (k * (n-k+1 + n)) / 2;
        cout << ((mn <= x && x <= mx) ? "YES\n" : "NO\n");
    }
}