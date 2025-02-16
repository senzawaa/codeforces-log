#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> k_pos;
        int a[n];
        for (int i = 0; i<n; i++) {
            cin >> a[i];
            if (a[i] == k) {
                k_pos.push_back(i);
            }
        }
        // vector<int> ss;
        if (k_pos.empty()) {
            cout << "NO\n";
        } else 
            cout << "YES\n";
        // i thougt it was going to be sliding window :/
    }
}