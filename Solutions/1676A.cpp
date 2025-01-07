#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        char dg[6];
        int dir = 1;
        int sum = 0;
        for (int i=0;i<6;i++) {
            cin >> dg[i];
            if (i > 2) dir = -1;
            sum += dir * (int)(dg[i]-'0');
        }
        cout << ((sum == 0) ? "YES\n" : "NO\n");
    }
}