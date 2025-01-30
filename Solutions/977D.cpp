#include<iostream>
#include<vector>
#include<unordered_map>
#define map unordered_map
#define ll long long
using namespace std;
// vector<int> data;
int n;
vector<ll> dfs(vector<ll> path, map<ll,int> mp) {
    if (path.size() == n) {
        return path;
    }
    ll prev = path.back();
    if (prev % 3 == 0 && mp[prev / 3] > 0) {
        mp[prev / 3]--;
        path.push_back(prev / 3);
        auto t = dfs(path, mp);
        if (!t.empty()) return t;
        path.pop_back();
        mp[prev / 3]++;
    }
    if (mp[prev * 2] > 0) {
        mp[prev * 2]--;
        path.push_back(prev * 2);
        auto t = dfs(path, mp);
        if (!t.empty()) return t;
        path.pop_back();
        mp[prev * 2]++;
    }
    return {};
}
int main() {
    cin >> n;
    ll a[n];
    map<ll, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0 ; i < n; i++) {
        mp[a[i]]--;
        vector<ll> ans = dfs(vector<ll>({a[i]}), mp);
        if (!ans.empty()) {
            for (auto nn : ans) {
                cout << nn << ' ';
            }
            return 0;
        }
        mp[a[i]]++;
    }
}