#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> xy;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        xy.push_back(make_pair(x, y));
    }
    sort(xy.begin(), xy.end());
    bool ok = 0;
    for (auto p : xy) {
        if (s > p.first) {
            s += p.second;
        } else {
            ok = 1;
            cout << "NO\n";
            break;
        }
    }
    if (!ok) cout << "YES\n";
}