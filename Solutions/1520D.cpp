#include<iostream>
#include<unordered_map>
#define map unordered_map
#define int long long
#define ll long long
using namespace std;
// const int mxN = 2e5;
// ll combinatorics[mxN];
int32_t main() {
    // for nC2, n*(n-1)/2
    // combinatorics[0] = 0;
    // combinatorics[1] = 0;
    // for (int i = 2; i <= mxN; i++) {
    //     combinatorics[i] = (i * (i-1))/2;
    // }
    // note to self: since nC2 is only (i * (i-1))/2, caching is NOT NEEDED
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        map<int, ll> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i] - i;
            mp[b[i]]++;
        }
        ll comb=0;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second >= 2) {
                comb += (it->second * (it->second-1))/2;
            }
        }
        cout << comb << '\n';
    }
    return 0;
}