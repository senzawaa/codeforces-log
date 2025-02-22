#include<iostream>
#include<unordered_map>
#define map unordered_map
#include<vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        dp[i] = mp.size();
        mp[a[i]]--;
        if (mp[a[i]] == 0) {
            mp.erase(a[i]);
        }
    }
    int l;
    // for (auto i : dp) cout << i << ' ';
    for (int i = 0; i< m; i++) {
        cin >> l;
        cout << dp[l-1] << '\n';
    }
}