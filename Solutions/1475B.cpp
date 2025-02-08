#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> yrs;
        while (n >= 2020) {
            yrs.push_back(2020);
            n-=2020;
        }
        if (n > yrs.size()) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}