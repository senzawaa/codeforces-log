#include<iostream>
#include<unordered_map>
#define map unordered_map
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < m; i++) {
        string ta, tb;
        cin >> ta >> tb;
        mp[ta] = tb;
    }
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.length() > mp[s].length()) {
            cout << mp[s] << ' ';
        } else cout << s << ' ';
    }
}