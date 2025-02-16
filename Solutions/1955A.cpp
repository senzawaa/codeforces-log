#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if (b > 2*a) {
            cout << (a * n) << '\n';
            continue;
        }
        cout << (b * (n/2) + a*(n%2)) << '\n';
    }
}