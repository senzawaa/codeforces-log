#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0 ; i < n; i++) {
            cin >> a[i];
        }
        bool ok = 1;
        for (int i = 1; i < n; i++) {
            if (!(abs(a[i-1] - a[i]) == 5 || abs(a[i-1] - a[i]) == 7)) {
                ok = 0;
            }
        }
        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}