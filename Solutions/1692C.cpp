#include<iostream>
#include<algorithm>
#include<vector>
#define pb push_back
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s[8];
        vector<int> fo;
        for (int i = 0; i < 8; i++) {
            cin >> s[i];
            auto f = find(s[i].begin(), s[i].end(), '#');
            if (f != s[i].end())
                fo.pb(f - s[i].begin());
            else
                fo.pb(-1);
        }
        bool ok = 0;
        for (int i = 1; i < (8 - 1); i++) {
            if (fo[i-1] == fo[i+1]) {
                ok = 1;
                cout << (i + 1) << ' ' << (fo[i] + 1) << '\n';
                break;
            }
        }
        if (!ok)
            for (int nm : {0, 7}) {
                if (!ok && fo[nm] != -1) {
                    ok = 1;
                    cout << (nm + 1) << ' ' << (fo[nm] + 1) << '\n';
                }
            }
    }
}