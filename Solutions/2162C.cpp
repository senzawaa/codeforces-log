#include<iostream>
#include<vector>
#define ll long long
#define int ll
using namespace std;
int32_t main() {
    vector<ll> pow2;
    pow2.push_back(1);
    for (ll i = 0; i < 31; i++) {
        pow2.push_back(pow2.back() * 2);
    }
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int idx = 0;
        while (pow2[idx] <= a)
            idx++;
        if ((pow2[idx] - 1) < b) {
            cout << "-1\n";
            continue;
        }
        vector<int> ans;
        b = a ^ b;
        for (int i = 0; i < idx; i++) {
            if (b & 1) {
                ans.push_back(pow2[i]);
            }
            b >>= 1;
        }
        cout << ans.size() << '\n';
        for (int nn : ans) cout << nn << ' ';
        if (ans.size() != 0) cout << '\n';
    }
}