#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<ll> a;
        vector<int> b;
        int tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            b.push_back(tmp);
        }
        // C1
        int B = b[0];
        auto a2 = a;
        for (int i = 0; i < n; i++) {
            a2[i] = B - a[i];
        }
        bool yes = false;
        for (int st : {a[0], a2[0]}) {
            bool ok = 1;
            int prev = st;
            for (int i = 0; i < n; i++) {
                int c = a[i];
                int d = a2[i];
                int mn = 1e9;
                if (c >= prev) {
                    mn = min(mn, c);
                }
                if (d >= prev) {
                    mn = min(mn, d);
                }
                if (mn == 1e9) {
                    ok = false;
                    break;
                }
                prev = mn;
            }
            if (ok) {
                yes = true;
                break;
            }
        }
        if (yes) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}