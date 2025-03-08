#include<iostream>
#include<cstring>
#include<algorithm>
#define int long long
#define ll long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int u[n];
    memcpy(u, v, n * sizeof(int));
    sort(u, u+n);
    long long dpv[n], dpu[n];
    int sumv = 0, sumu = 0;
    for (int i = 0; i < n; i++) {
        sumv += v[i];
        dpv[i] = sumv;
    }
    for (int i = 0; i < n; i++) {
        sumu += u[i];
        dpu[i] = sumu;
    }
    // for (auto nn : dpv) cout << nn << ' ';
    // return 0;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int t, l, r;
        cin >> t >> l >> r;
        l--; r--;
        long long* addr = (t==1) ? dpv : dpu;
        if (l == 0) {
            cout << addr[r] << '\n';
        } else {
            cout << (addr[r] - addr[l-1]) << '\n';
        }
    }
}