#include<iostream>
using namespace std;
int main() {
    int t;
    int a,b;
    cin >> t;
    for (int idx = 0; idx < t; idx++) {
        cin >> a >> b;
        // if (a % b != 0) cout << b - (a % b) << '\n';
        // else cout << '0' << '\n';
        cout << (b - (a % b)) % b << '\n';
    }
}