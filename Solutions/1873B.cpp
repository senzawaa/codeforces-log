#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int dp[n];
        int prod = 1;
        int zr = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != 0)
                prod *= a[i];
            else
                zr++;
        }
        if (zr > 1) {
            cout << "0\n";
            continue;
        } else if (zr == 1) {
            cout << prod << '\n';
            continue;
        }
        int mx[2] = {n+1, -1};
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                int tmp = prod;
                prod /= a[i];
                prod *= (a[i] + 1);
                dp[i] = prod;
                prod = tmp;
            }
            if (mx[1] < dp[i]) {
                mx[0] = i;
                mx[1] = dp[i];
            }
        }
        // int mx = -1;
        cout << mx[1] << '\n';
    }
}