#include<iostream>
using namespace std;
const int l8[4] = {8, 4, 2, 6};
int main() {
    int n;
    cin >> n;
    // int r = 1;
    // for (int i = 0; i<n; i++) {
    //     r *= 8;
    //     r %= 10;
    // }
    if (n == 0) cout << 1;
    else
        cout << l8[(n-1)%4];
}