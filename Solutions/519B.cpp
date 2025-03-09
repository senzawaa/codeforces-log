#include<iostream>
#include<cstring>
#include<unordered_map>
#define map unordered_map
using namespace std;
// const int mxN = 1e9+1;
// int map[mxN];
int main() {
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int j = 1; j <= 2; j++) {
        map<int, int> dummy = mp;
        int b[n-j];
        for (int i = 0; i < (n-j); i++) {
            cin >> b[i]; 
            dummy[b[i]]--;
        }
        for (auto nm : a) {
            if (dummy[nm] != 0) {
                cout << nm << '\n';
                mp[nm]--;
                break;
            }
        }
    }
}