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
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int mx=0;
        int nn = 0;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            mx = max(mx, it->second);
            nn++;
        }
        if (mx - 2 >= nn - 1) nn++;
        cout << min(mx, nn-1) << endl;
    }
}