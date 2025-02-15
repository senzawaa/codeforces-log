#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cn;
    vector<vector<int>> a(n);
    int inc = 0;
    for (int i = 0; i < n; i++) {
        cin >> cn;
        // for (int j = 0; j < cn; j++) {
        //     a[i].push_back(++inc);
        // }
        a[i].push_back(++inc);
        inc += cn-1;
        a[i].push_back(inc);
    }
    // for (auto vec : a) {
    //     for (auto nm : vec) {
    //         cout << nm << ' ';
    //     }
    //     cout << '\n';
    // }
    int m;
    cin >> m;
    int q[m];
    for (int i = 0; i < m; i++) {
        cin >> q[i];
        int l=0,r=n-1;
        while (l <= r) {
            int m=(r-l)/2+l;
            if (a[m][0] <= q[i] && q[i] <= a[m][1]) {
                cout << (m+1) << '\n';
                break;
            }
            if (q[i] < a[m][0]) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
    }
}