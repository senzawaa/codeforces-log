#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        vector<int> w;
        w.push_back(a[0]);
        int mx = -1;
        for (int i = 1; i < n; i++) {
            // cout << w.back() << ' ';
            if ((a[i] - w.back()) > k) {
                mx = max(mx, (int)w.size());
                w = vector<int>();
                w.push_back(a[i]);
            }
            else w.push_back(a[i]);
        }
        mx = max(mx, (int)w.size());
        cout << (n - mx) << '\n';
    }
}