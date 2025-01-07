#include<iostream>
// #include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // vector<int> a(n, 0);
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int prev = a[0];
        bool dn=0;
        for (int nm : a) {
            if (nm - prev > 1) {
                if (!dn) {
                    cout << "NO\n";
                    dn=1;
                }
            }
            prev = nm;
        }
        if (!dn)
            cout << "YES\n";
        // --n;
        // int i = 0, j = 1;
        // while (i < n && j < n) {
        //     if (a[i] <= a[j]) a.erase(a.begin());
        //     else {
        //         i++;
        //         j++;
        //     }
        //     n = a.size();
        // }
        // cout << ((a.size() == 1) ? "YES" : "NO");

    }
}