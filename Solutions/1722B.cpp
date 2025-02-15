#include<iostream>
#include<unordered_map>
#define map unordered_map
using namespace std;
int main() {
    unordered_map<char, int> dt;
    dt['R'] = 1;
    dt['G'] = 0;
    dt['B'] = 0;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char a[n], b[n];
        for (int i = 0; i<n; i++)
            cin >> a[i];
        for (int i = 0; i<n ; i++) {
            cin >> b[i];
        }
        bool ok = 0;
        for (int i = 0; i< n; i++) {
            int aa=a[i], bb=b[i];
            if (dt[aa] ^ dt[bb] == 1) {
                cout << "NO\n";
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "YES\n";
    }
}