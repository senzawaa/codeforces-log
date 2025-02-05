#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int>> ooe(2, vector<int>());
        int n;
        cin >> n;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            ooe[a%2].pb(a);
        }
        // if n of odd is even, sum = even
        // if n of odd is odd, sum = odd, if donate one to even, even && odd
        // int a=0, b=1;
        if (ooe[1].size() == 0) {
            cout << "YES\n";
            continue;
        }
        if (ooe[1].size() % 2 == 0) {
            cout << "YES\n";
            continue;
        } 
        cout << "NO\n";
    }
}