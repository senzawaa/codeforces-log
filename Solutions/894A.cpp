#include<iostream>
#include<string>
// #include<unordered_map>
#include<vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> q;
    vector<int> a;
    int idx=0;
    for (char c : s) {
        if (c == 'Q') q.push_back(idx);
        else if (c == 'A') a.push_back(idx);
        ++idx;
    }
    // for (int i : q) cout << i;
    int ans = 0;
    for (int i = 0; i < q.size(); i++) {
        for (int j = 0; j < q.size(); j++) {
            if (q[i] == q[j]) continue;
            for (int k = 0; k < a.size(); k++) {
                if (!(q[i] < a[k] && a[k] < q[j])) continue;
                // cout << q[i] << ' ' << a[k] << ' ' << q[j] << '\n';
                ans++;
            }
        }
    }
    cout << ans;

}