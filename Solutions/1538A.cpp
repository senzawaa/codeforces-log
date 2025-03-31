#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mx = max_element(a, a+n) - a;
        int mn = min_element(a, a+n) - a;
        cout << min(min(max(mx+1, mn+1), max(n-mx, n-mn)), min(mn, mx) + n-max(mn, mx)+1) << '\n';
    }
}