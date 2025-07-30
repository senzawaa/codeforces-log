#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int stk = 1;
        int ans = 0;
        int lb = upper_bound(a.begin(), a.end(), c) - a.begin() - 1;
        while (lb >= 0) {
            if (a[lb] > c) {
                lb--;
            }
            // cout << "to be deleted: " << a[lb] << '\n';
            a.erase(a.begin() + lb);
            for (int i = 0; i < a.size(); i++) {
                a[i] *= 2;
            }
            lb = upper_bound(a.begin(), a.end(), c) - a.begin() - 1;
        }
        // for (auto it:a) cout << it << ' ';
        // cout << '\n';
        cout << a.size() << '\n';
    }
}