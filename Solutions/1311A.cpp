#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == b) cout << 0 << '\n';
        else if (a > b) cout << (1+(a+b)%2) << '\n';
        else cout << (1+(((a+b)%2)^1)) << '\n';
    }
}