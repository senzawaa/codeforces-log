#include<iostream>
// #include<unordered_map>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> mp(3, vector<int>());
    int t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        mp[t - 1].push_back(i + 1);
    }
    vector<vector<int>> w;
    while (mp[0].size() != 0 && mp[1].size() != 0 && mp[2].size() != 0) {
        for (vector<int> &vec : mp) {
            // for (int v : vec) cout << v << ' ';
            // cout << '\n';
            if (w.empty() || w.back().size() == 3)
                w.push_back({});
            w.back().push_back(vec.front());
            vec.erase(vec.begin());
        }
    }
    // if (w.back().size() != 3)
    //     w.pop_back();
    cout << w.size() << '\n';
    for (auto vec : w) {
        cout << vec[0] << ' ' << vec[1] << ' ' << vec[2];
        cout << '\n';
    }
}