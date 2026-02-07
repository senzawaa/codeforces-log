#include<iostream>
#define int long long
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n+1; i++) {
            if (n % i != 0) {
                cout << (i-1) << '\n';
                break;
            }
        }
    }
}