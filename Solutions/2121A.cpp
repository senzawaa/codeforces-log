#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;   
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // left first, right first
        int left = abs(s - a[0]) + (a[n-1] - a[0]);
        int right = abs(a[n-1] - s) + (a[n-1] - a[0]);
        cout << min(max(left, 0), max(right, 0)) << '\n';
    }
}