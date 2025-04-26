#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        vector<int> b, c;
        for (auto aa : a) {
            if (mx == aa) c.push_back(aa);
            else b.push_back(aa);
        }
        if (b.empty()) cout << "-1\n";
        else {
            cout << b.size() << ' ' << c.size() << '\n';
            for (int aa : b) cout << aa << ' ';
            for (int aa : c) cout << aa << ' ';
        }
    }
} 