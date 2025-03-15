#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;
        vector<long long> a(n + 2, 0);
        for (int p = 1; p <= n; p++) {
            cin >> a[p];
        }
        a[n + 1] = x + (x - a[n]);
        long long ans = 0;
        for (int p = 1; p <= n + 1; p++) {
            long long diff = a[p] - a[p - 1];
            ans = max(ans, diff);
        }
        cout << ans << endl;
    }
}