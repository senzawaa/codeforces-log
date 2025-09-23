#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) swap(a, b);
        int mx = (b - a) * 2;
        if (mx < c || mx < max(a, max(b, c))) cout << "-1\n";
        else {
            int d = b - a;
            if (c + d <= mx) cout << c + d << endl;
            else cout << c - d << endl;
        }
    }
}