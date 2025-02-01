#include<iostream>
#include<vector>
// #define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c2 = 0;
        int c3 = 0;
        while (n % 2 == 0 && (c2++ || true)) 
            n/=2;
        while (n % 3 == 0 && (c3++ || true))
            n/=3;
        if (n != 1 || c3 < c2) {
            cout << -1 << endl;
            continue;
        }
        cout << (c3 + (c3 - c2)) << endl;
    }
}