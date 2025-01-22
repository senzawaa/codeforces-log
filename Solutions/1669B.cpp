#include<iostream>
#include<unordered_map>
#define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        map<int, int> mp;
        int n;
        cin >> n;
        int tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        bool ok = false;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second >= 3) {
                ok = 1;
                cout << it->first << '\n';
                break;
            }
        }
        if (!ok)
            cout << "-1\n";
    }
}