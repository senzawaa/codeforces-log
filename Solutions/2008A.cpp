#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (b & 1 && a >= 2) {
            a-=2;
            b++;
        }
        if (a&1^1 && b&1^1) {
            cout << "YES\n";
        } else cout << "NO\n";
    }
}