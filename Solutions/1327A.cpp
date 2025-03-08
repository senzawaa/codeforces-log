#include<iostream>
#define int long long
using namespace std;
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (((n & 1 && k & 1) || (n & 1 ^ 1 && k & 1 ^ 1)) && ((k * k) <= n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}