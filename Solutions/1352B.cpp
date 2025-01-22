#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k > n) {
            cout << "NO\n";
            continue;
        }
        bool dn = false;
        for (int nm : {1, 2}) {
            int m = n;
            vector<int> a;
            for (int i = 0; i < (k-1); i++) {
                a.push_back(nm);
                m -= nm;
            }
            a.push_back(m);
            if ((m % 2) == (nm % 2) && m > 0) {
                if (!dn) {
                    cout << "YES\n";
                    dn = true;
                    for (auto mm : a) 
                        cout << mm << ' ';
                    cout << '\n';
                }
            }
        }
        if (!dn) {
            cout << "NO\n";
        }
    }
}