#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mx = -1;
    for (int i = 0; i < n; i++) {
        int c[n];
        copy(a, a+n, c);
        for (int j = i; j < n; j++) {
            c[j] = 1 - c[j];
            // if (accumulate(c, c+n, 0) > mx) {
            //     for (auto nn : c) cout << nn << ' ';
            //     cout << '\n';
            // }
            mx = max(mx, accumulate(c, c+n, 0));
        }
    }
    cout << mx;
}