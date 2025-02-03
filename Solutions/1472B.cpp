#include<iostream>
#include<unordered_map>
#define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            mp[a]++;
        }
        bool ok = 0;
        if (mp[2] % 2 == 1 && (mp[1] >= 2 && mp[1] % 2 == 0)) {
            cout << "YES\n";
            continue;
        }
        for (int i : {1, 2}) {
            if (mp[i] % 2 == 1) {
                cout << "NO\n";
                ok = 1;
                break;
            }
        }
        if (!ok) {
            cout << "YES\n";
        }
    }
}