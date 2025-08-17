#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n < m) {
            cout << "NO\n";
            continue;
        }
        if ((n-m)%2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}