#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int e1 = a-1;
        int e2 = abs(b-c)+c-1;
        // cout << e1 << ' ' << e2 << '\n';
        if (e1 > e2) cout << 2 << '\n';
        else if (e1 < e2) cout << 1 << '\n';
        else cout << 3 << '\n';
    }
}