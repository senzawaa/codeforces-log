#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> occ(n, 0);
        bool ok = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            a--;
            if (i == 0) {
                occ[a] = 1;
            } else {
                if (!((a != 0 && occ[a-1] == 1) || (a != n-1 && occ[a+1] == 1))) {
                    if (!ok) cout << "NO\n";
                    ok = 1;
                    
                }
                occ[a] = 1;
            }
        }
        if (!ok) {
            cout << "YES\n";
        }
    }
}