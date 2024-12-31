#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int idx = 0; idx < n; idx++) cin >> a[idx];
    int curr = 1, mx = -1;
    for (int idx = 1; idx < n; idx++) {
        if (a[idx] >= a[idx-1]) {
            // cout << a[idx] << endl;
            curr += 1;
        } else {
            mx = max(curr, mx);
            curr = 1;
        }
    }
    mx = max(curr, mx);
    cout << mx;
}