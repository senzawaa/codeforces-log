#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        // if the distance between alice and bob is even, alice can trap bob
        cout << ((abs(a - b) % 2 == 0) ? "YES\n" : "NO\n");
    }
    return 0;
}