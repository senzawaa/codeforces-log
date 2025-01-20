#include<iostream>
#include<vector>
#include<algorithm>
// #include<unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // for (auto nm : a)  {
        //     cout << nm << ' ';
        // }
        vector<int> b;
        // unordered_map<int, int> ct;
        vector<int> rest;
        for (int i = 1; i <= n; i++) {
            rest.push_back(i);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            auto f = find(rest.begin(), rest.end(), a[i]);
            if (f != rest.end()) {
                b.push_back(a[i]);
                rest.erase(f);
                cnt++;
            }
        }
        for (int i = 0; i < (n - cnt); i++) {
            b.push_back(rest[0]);
            rest.erase(rest.begin());
        }
        for (auto nm : b) {
            cout << nm << ' ';
        }
        cout << '\n';
    }
}