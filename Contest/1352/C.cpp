#include<iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll l = 0, r = 1e10;
        while (l <= r) {
            ll m = (l + r) / 2;
            ll nth = m - (m / n);
            if (nth < k) {
                l = m + 1;
            } else if (nth > k) {
                r = m - 1;
            } else if (nth == k) {
                if (m % n == 0) {
                    r = m - 1;
                } else {
                    cout << m << '\n';
                    break;
                }
            }
        }
    }
}