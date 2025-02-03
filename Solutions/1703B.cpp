#include<iostream>
#include<unordered_map>
using namespace std;
#define map unordered_map
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<char, int> mp;
        char c;
        int sm=0;
        for (int i = 0; i < n; i++) {
            cin >> c;
            if (mp[c] == 0)
                sm++;
            mp[c]++;
            sm++;
        }
        cout << sm << '\n';
    }
}