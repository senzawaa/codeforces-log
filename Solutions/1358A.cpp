#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << (n * m / 2 + ((n * m) % 2 & 1)) << '\n';
    }
}