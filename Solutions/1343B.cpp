#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // if left is all even, the sum of it is even, if right is all odd, even number of n/2 is required to make the sum even.
        if (n % 4 != 0) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        int s = 0;
        for (int i = 2; i < 2*(n/2+1); i += 2) {
            cout << i << ' ';
            s += i;
        }
        int c=1;
        for (int i = 0; i < n/2-1; i++) {
            cout << c << ' ';
            s -= c;
            c += 2;
        }
        cout << s;
        cout << '\n';
    }
}