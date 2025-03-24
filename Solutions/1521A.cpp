#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (b == 1) {
            cout << "NO\n";
            continue;
        }
        if (b == 2) b = 4; // so that the numbers will be distinct.
        long long lg = a * b;
        cout << "YES\n" << (lg - a) << ' ' << a << ' ' << lg << '\n';
    }
}