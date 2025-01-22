#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#define map unordered_map
using namespace std;
string strip(string s, char c) {
    while (s[0] == c) {
        s.erase(s.begin());
    }
    while (s[s.length() - 1] == c) {
        s.erase(s.end() - 1);
    }
    return s;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s = strip(s, 'W');
        // cout << s;
        map<char, int> mp;
        bool ok = false;
        if (find(s.begin(), s.end(), 'R') == s.end() && find(s.begin(), s.end(), 'B') == s.end()) {
            cout << "YES\n";
            continue;
        }
        int ps=0;
        for (char c : s) {
            if (c == 'W' && s[ps-1] != 'W') {
                if ((mp['B'] == 0 || mp['R'] == 0) && !ok) {
                    ok = true;
                    cout << "NO\n";
                    break;
                }
                mp['B']=0;
                mp['R']=0;
            } else {
                mp[c]++;
            }
            ps++;
        }
        if ((mp['B'] == 0 || mp['R'] == 0) && !ok) {
            ok = true;
            cout << "NO\n";
            // break;
        }
        if (!ok)
            cout << "YES\n";
    }
}