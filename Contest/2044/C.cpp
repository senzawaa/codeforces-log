#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans=0;
        int left = 0;
        for (auto row : {a, b}) {
            ans += min(m, row);
            left += ((m > row) ? (m-row) : 0);
        }
        cout << (ans + min(left, c)) << '\n';
    }
}