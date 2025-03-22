#include<iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        ll ans = -1;
        for (int i = 0; i < 30; i++) {
            for (int j = 0; j < 30; j++) {
                ll tmp = (1 << i) | (1 << j);
                if (tmp < x && (x + tmp) > (x ^ tmp) && (tmp + (x ^ tmp) > x)) {
                    ans = tmp;
                }
            }
        }
        cout << ans << '\n';
    }
}