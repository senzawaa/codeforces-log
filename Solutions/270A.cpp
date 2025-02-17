#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int dg;
        cin >> dg;
        int n = 360 / (180-dg);
        if (360 % (180-dg) == 0 && n >= 3) {
            cout << "YES\n";
        } else 
            cout << "NO\n";
    }
}