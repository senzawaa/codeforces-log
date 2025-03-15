#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int i = 1;
        // while (n > (k*i) && ++i) {
        //     continue;
        // }
        // k *= i;
        // cout << k << '\n';
        if (k >= n) {
            cout << ((k / n) + (k % n != 0)) << '\n';
        } else {
            k *= ceil((double)(n) / k);
            cout << ((k / n) + (k % n != 0)) << '\n';
        }
    }
}