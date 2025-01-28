#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    // int t;
    // cin >> t;
    // while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int mx = 0;
        int curr = 0;
        for (int i = 0; i < m; i++) {
            curr += -a[i];
            mx = max(mx, curr);
        }
        cout << mx << '\n';
    // }
}