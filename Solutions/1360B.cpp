#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        sort(a, a+n);
        int l = 0, r = 1;
        int mn = 1e9;
        while (r != n) {
            mn = min(mn, a[r++] - a[l++]);
        }
        cout << mn << '\n'; 
    }
}