#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool ok = 0;
        if ((2 * b - c) > 0 && (2 * b - c) % a == 0) ok = 1;
        if ((a + c) % (2 * b) == 0) ok = 1;
        if ((2*b-a) > 0 && (2 * b - a) % c == 0) ok = 1;
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
}