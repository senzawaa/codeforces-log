#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a;
        unordered_map<int, int> mp;
        bool ok = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            mp[a]++;
            if (!ok && mp[a] >= 2) {
                cout << "NO\n";
                ok = 1;
            }
        }
        if (!ok)
            cout << "YES\n";
    }
}