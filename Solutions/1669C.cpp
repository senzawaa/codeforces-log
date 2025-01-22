#include<iostream>
#include<unordered_map>
#define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> oi, ei;
        int tmp;
        for (int i = 1; i < (n+1); i++) {
            cin >> tmp;
            (i % 2 ? oi : ei)[tmp % 2]++;
        }
        bool ok = false;
        for (auto mi : {oi, ei}) {
            int ct=0;
            for (auto it = mi.begin(); it != mi.end(); it++) 
                ct++;
            if (ct == 2 && !ok) {
                cout << "NO\n";
                ok=1;
            }
        }
        if (!ok) {
            cout << "YES\n";
        }
    }
}