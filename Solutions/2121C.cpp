#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int mx=-1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                mx = max(mx, a[i][j]);
            }
        }
        vector<int> rc(n, 0), cc(m, 0);
        int cmx=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == mx) {
                    rc[i]++;
                    cc[j]++;
                    cmx++;
                }
            }
        }
        int ok = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                int ct = rc[r] + cc[c];
                if (a[r][c] == mx)
                    ct--;
                if (ct == cmx) 
                    ok = 1;
            }
        }
        cout << (mx - ok) << '\n';
    }
    return 0;
}