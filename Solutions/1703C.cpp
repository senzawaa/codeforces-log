#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#define int long long
#define ll long long
#define map unordered_map
#define all(x) x.begin(), x.end()
#define rsort greater<>()
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        map<char, int> mp;
        mp['U'] = -1;
        mp['D'] = 1;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            for (int j = 0; j < b; j++) {
                char c;
                cin >> c;
                a[i] += mp[c];
                if (a[i] == -1) a[i] = 9;
                else if (a[i] == 10) a[i] = 0;
            }
        }
        for (auto nn : a) cout << nn << ' ';
        cout << '\n';
    }
}