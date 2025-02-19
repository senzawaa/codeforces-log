#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][2];
    int inc = 0;
    int t;
    for (int i = 0; i < n; i++) {
        inc++;
        cin >> t;
        a[i][0] = inc;
        inc += --t;
        a[i][1] = inc;
    }
    int m;
    cin >> m;
    int q;
    for (int i = 0; i < m; i++) {
        cin >> q;
        int l = 0; int r = n - 1;
        while (l <= r) {
            int m = (r-l)/2 + l;
            if ( a[m][0] <= q && q <= a[m][1] ) {
                cout << (m+1) << '\n';
                break;
            }
             else if (a[m][0] > q) {
                r = m - 1;
             } else l = m + 1;
        }
    }
}