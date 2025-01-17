#include<iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll l=0, r=2*k+1;
        while (l < r) {
            int m = (l+r)/2;
            int kk = m - (m / n);
            if (kk >= k) {
                r = m;
            } else {
                l = m+1;
            }
        }
        cout << l << '\n';
    }
}