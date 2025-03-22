#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        int prev = l;
        bool ok = 0;
        for (int n : {r, d, u}) {
            if (prev != n) {
                cout << "NO\n";
                ok = 1;
                break;
            }
            prev = n;
        }
        if (!ok) cout << "YES\n";
    }
}