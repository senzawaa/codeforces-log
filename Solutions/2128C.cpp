#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int mn = b[0];
        bool ok = 1;
        for (int i = 0; i < n; i++) {
            if (mn * 2 <= b[i]) ok = 0;
            mn = min(mn, b[i]);
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}