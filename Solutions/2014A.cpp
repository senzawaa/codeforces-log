#include<iostream>
// #include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        int cur = 0, sm=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= k) {
                cur += a[i];
            }
            if (a[i] == 0 && cur > 0) {
                sm++;
                cur--;
            }
        }
        cout << sm << '\n';
    }
}