#include<iostream>
#define int long long
#define ll long long
using namespace std;
signed main() {
    int a[30];
    for (int i = 0; i < 30; i++) {
        a[i] = 1 << (i+1);
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int l = 0, r = 0;
        l = a[n-1];
        for (int i = 0; i < (n/2-1); i++) l += a[i];
        // cout << '\n';
        for (int i = n/2-1; i < (n-1); i++) r += a[i];
        cout << (l-r) << '\n';
    }
}