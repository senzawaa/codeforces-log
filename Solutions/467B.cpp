#include<iostream>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int x[m+1];
    for (int i = 0; i < m + 1; i++) {
        cin >> x[i];
    }
    int a = 0;
    for (int i = 0; i < m + 1; i++) {
        int j = m;
        // for (int j = 0; j < m + 1; j++) {
        if (i == j) continue;
        int s = 0;
        int l = x[i], r = x[j];
        while (l != 0 || r != 0) {
            s += ((l % 2) ^ (r % 2));
            l >>= 1;
            r >>= 1;
        }
        // cout << s << ' ';
        a += (s <= k);
        // }
    }
    cout << a << '\n';
}