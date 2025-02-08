#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        char _;
        cin >> a >> _ >> b;
        cout << (a + b) << '\n';
    }
}