#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        int i = 0;
        while (max(a, b) <= n && ++i) {
            if (a > b) swap(a, b);
            a += b;
        }
        cout << i << '\n';
    }
}