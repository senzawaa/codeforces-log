#include<iostream>
#define ll long long
#define int ll
using namespace std;
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, m;
        cin >> a >> b >> m;
        cout << (m/a + 1 + m/b + 1) << '\n'; 
    }
}