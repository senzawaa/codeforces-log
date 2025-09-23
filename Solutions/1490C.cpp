#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
int32_t main() {
    unordered_map<int, int> cubes;
    vector<int> cb;
    int i = 1;
    while (i*i*i <= (int)1e12) {
        cubes[i*i*i] = 1;
        cb.push_back(i*i*i);
        i++;
    }
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        // cout << x << '\n' << '\n';
        int lb = *lower_bound(cb.begin(), cb.end(), x);
        bool ok = 0;
        for (int i = 0; i < min(lb, (int)cb.size()); i++) {
            if (cubes.find(x-cb[i]) != cubes.end()) {
                cout << "YES\n";
                ok = 1;
                break;
            }
        }
        if (!ok) cout << "NO\n";
    }
}