#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n[3], s=0;
        for (int i = 0; i < 3; i++) {
            cin >> n[i];
            s+=n[i];
        }
        bool dn = false;
        for (int i = 0; i < 3; i++) {
            if (s-n[i] >= 10) {
                if (!dn) {
                    cout << "YES" << '\n';
                    dn ^= 1;
                }
            }
        }
        if (!dn)
            cout << "NO\n";
    }
}