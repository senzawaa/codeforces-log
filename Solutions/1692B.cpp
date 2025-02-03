#include<iostream>
#include<unordered_map>
#define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        map<int, int> cnt;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int i = 0;
        int rmv = 0;
        for (auto it = cnt.begin(); it != cnt.end(); it++) {
            rmv += it->second - 1;
            ++i;
        }
        cout << (i - (rmv % 2)) << '\n';
    }
}