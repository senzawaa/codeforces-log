#include<iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int dg;
        int lvl = 0;
        int cpy = x;
        while (cpy != 0) {
            lvl++;
            cpy /= 10;
        }
        // free(&cpy);
        // for (dg = 9; dg > 0; dg--) {
        //     if (x % dg == 0)
        //         break;
        // }
        dg = x % 10;
        cout << ((dg-1) * 10 + (int[4]){1, 3, 6, 10}[lvl-1]) << '\n';
    }
}