#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if ((x + 1) == y) {
            cout << "Yes\n";
            continue;
        }
        if (x > y && ((x - y + 1) % 9 == 0)) {
            cout << "Yes\n";
            continue;
        }
        cout << "No\n";
    }
}