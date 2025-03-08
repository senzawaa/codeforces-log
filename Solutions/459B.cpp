#include<iostream>
#include<unordered_map>
#define map unordered_map
#include<algorithm>
#define int long long
#define ll long long
using namespace std;
// long long fact(long long n) {
//     if (n == 1) return 1;
//     return n * fact(n-1);
// }
int32_t main() {
    int n;
    cin >> n;
    int b[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        mp[b[i]]++;
    }
    int mn = *min_element(b, b+n);
    int mx = *max_element(b, b+n);
    int d = mx - mn;
    int c;
    if (d == 0) {
        c = mp[mn] * (mp[mn]-1) / 2;
    } else {
        c = mp[mn] * mp[mx];
    }
    cout << d << ' ' << c;
}