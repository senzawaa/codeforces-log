#include<iostream>
#include<unordered_map>
#include<string>
#define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string k;
        string s;
        map<char, int> mp;
        cin >> k;
        cin >> s;
        int i = 0;
        for (char c : k) mp[c] = ++i;
        int prev = mp[s[0]], sm = 0;
        for (char c : s) {
            sm += abs(prev-mp[c]);
            prev = mp[c];
        }
        cout << sm << '\n';
    }
}