#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        vector<vector<int>> ooe(2);
        for (int i = 0; i < n; i++) {   
            cin >> a[i];
            ooe[a[i]%2].push_back(a[i]);
        }
        // sort(ooe[0].rbegin(), ooe[0].rend());
        // sort(ooe[1].begin(), ooe[1].end());
        // int m = 0, b = 0;
        // for (int i = 0; i < n; i++) {
        //     for (auto vec : {ooe[0], ooe[1]}) {

        //     }
        // }
        cout << (accumulate(ooe[0].begin(), ooe[0].end(), 0) > accumulate(ooe[1].begin(), ooe[1].end(), 0) ? "YES" : "NO");
        cout << '\n';
    }
}