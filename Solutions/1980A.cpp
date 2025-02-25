#include<iostream>
#include<unordered_map>
#define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        char a[n];
        map<char, int> ctr;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ctr[a[i]]++;
        }
        int sm = 0;
        for (int i = 0; i <= ('G'-'A'); i++) {
            char c = 'A'+i;
            sm += max(0, m - ctr[c]);
            // cout << ctr[c] << '-' << (ctr[c] > m ? 0 : (m - ctr[c])) << '\n';
        }
        cout << sm << '\n';
    }
}