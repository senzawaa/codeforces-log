#include<iostream>
// #include<vector>
#include<unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        unordered_map<int, int> map;
        unordered_map<int, int> inverse;
        for (int i=0;i<n;i++) {
            map[a[i]]++;
            inverse[a[i]] = i;
        }
        for (auto it=map.begin();it!=map.end();it++) {
            if (it->second == 1) {
                cout << inverse[it->first]+1 << endl;
                break;
            }
        }
    }
}