#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int mn = 0, sm = 0;
        bool ng = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 0) {
                ng = 1;
                sm += -a[i];
            } else sm += a[i];
            mn = min(mn, a[i]);
        }
        if (!ng) sm -= mn*2;
        cout << sm << '\n';
    }
}