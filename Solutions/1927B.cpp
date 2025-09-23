#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
    const char chars[] = "abcdefghijklmnopqrstuvwxyz";
    int t;
    cin >> t;
    while (t--) {
        unordered_map<int, vector<char>> mp;
        for (char c : chars) {
            mp[0].push_back(c);
        }
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cout << (char)mp[a[i]].front();
            mp[a[i]+1].push_back(mp[a[i]].front());
            mp[a[i]].erase(mp[a[i]].begin());
        }
        cout << '\n';
    }
}