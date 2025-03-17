#include<iostream>
#include<string>
#include<unordered_map>
#define map unordered_map
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        map<char, int> ct;
        for (char c : s) {
            ct[c]++;
        }
        if (ct.size() == 1) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        vector<int> lr;
        for (auto it = ct.begin(); it != ct.end(); it++) {
            lr.push_back(s.find(it->first));
            if (lr.size() == 2) break;
        }
        swap(s[lr[0]], s[lr[1]]);
        cout << s << '\n';
    }
}