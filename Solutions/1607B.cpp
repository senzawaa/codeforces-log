#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        long long d;
        long long nn = n%4;
        if (nn == 1) {
            d = -n;
        } else if (nn == 2) {
            d = 1;
        } else if (nn == 3) {
            d = n + 1;
        } else {
            d = 0;
        }
        if (x % 2 == 0) {
            cout << x + d << '\n';
        } else {
            cout << x - d << '\n';
        }
    }
}