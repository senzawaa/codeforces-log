#include<iostream>
#include<numeric>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        long long sm = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sm += a[i];
        }
        long long l=1, r=1e9;
        while (l <= r) {
            long long m = (l + r) / 2;
            if (m*m > sm) {
                r = m - 1;
            } else l = m + 1;
        }
        cout << ((r*r == sm) ? "YES\n" : "NO\n");
    }
}