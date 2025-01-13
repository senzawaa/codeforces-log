/* welp i tried */
#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        long long aS=0, bS=0;
        long long c = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            aS += a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            bS += b[i];
        }
        int opN = 0;
        long long mn = 1e9;
        for (int i = 0; i < n; i++) {
            if (b[i] > a[i]) {
                opN++;
            }
            mn = min(mn, a[i] - b[i]);
        }
        // cout << mn;
        if (bS > aS) {
            cout << "NO\n";
            continue;
        }
        if (opN == 0) {
            cout << "YES\n";
        } else if (opN == 1) {
            bool dn = false;
            for (int i = 0; i < n; i++) {
                if ((a[i] + mn) >= b[i]) { // mn is negative so +
                    if (!dn)
                        cout << "YES\n";
                    dn = 1;
                }
            }
            if (!dn)
                cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
}