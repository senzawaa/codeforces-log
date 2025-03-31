#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#define int long long
#define ll long long
#define map unordered_map
#define all(x) x.begin(), x.end()
#define rsort greater<>()
using namespace std;
int c2(int n) {
    return n*(n-1)/2;
}
int32_t main() {
    int n, m;
    cin >> n >> m;
    int mn, mx;
    // mn = 0;
    int dv = n/m;
    int rem = n%m;
    mn = rem * c2(dv + 1) + (m - rem) * c2(dv);
    mx = c2(n-m+1);
    cout << mn << ' ' << mx;
}