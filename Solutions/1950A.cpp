#include<iostream>
// #define int long long
#define ll long long
// #define min3(a, b, c) {min(a, min(b, c))}
// #define max3(a, b, c) {max(a, max(b, c))}
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int mn=min(a, min(b, c)), mx=max(a, max(b, c));
        if (mn == mx) {
            cout << "NONE\n";
        } else if (a == b || b == c) {
            cout << "NONE\n";
        } else if (mn == a && mx == c) {
            cout << "STAIR\n";
        } else if (mx == b) {
            cout << "PEAK\n";
        } else {
            cout << "NONE\n";
        }
    }
    return 0;
}