#include<iostream>
#include<string>
#include<unordered_map>
#define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s) mp[c]++;
        int noo = 0;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second & 1) noo++;
        }
        noo -= k;
        if (noo <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}