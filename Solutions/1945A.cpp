#include<iostream>
#define ll long long
#define int ll
using namespace std;
signed main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (b % 3 != 0 && (b % 3 + c) < 3) {
            cout << "-1\n";
            continue;
        }
        // cout << (a + ((b+c)/3 + ((c-b%3)%3 != 0))) << '\n';
        int tm=3 - (b%3 == 0 ? 3 : b%3);
        c -= tm;
        b += tm;
        cout << (a + b/3 + c/3 + (c%3!=0)) << '\n';
    }
}