#include<iostream>
using namespace std;
int main() {
    // int t;
    // cin >> t;
    // while (t--) {
    int a, b;
    cin >> a >> b;
    int sm = a;
    int rem = 0;
    while (a >= b) {
        rem = a%b;
        a/=b;
        sm += a;
        a += rem;
    }
    cout << sm;
    // }
}