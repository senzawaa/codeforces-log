#include<iostream>
#include<string>
#include<vector>
#include<numeric>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> tf;
    for (int i = 0; i < n - 1; i++) {
        tf.push_back(s[i]==s[i+1]);
    }
    tf.push_back(0);
    vector<int> dp;
    dp.push_back(tf[0]);
    for (int i = 1; i < n; i++) {
        dp.push_back(dp.back() + tf[i]);
    }
    int m;
    cin >> m;
    // for (auto nm : dp) cout << nm << '\n';
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        cout << dp[r-1-1] - (l!=1?dp[l-1-1]:0) << '\n';
    }
}