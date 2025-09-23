#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> vc;
    for (int i = n; n >= 1; n--) {
    while (n >= i) {
    vc.push_back(i);
    n -= i;
    }
    }
    if (n != 0) cout << "NO\n";
    else {
    cout << "YES\n";
    cout << vc.size() << '\n';
    for (auto it : vc) cout << it << ' ';
    cout << '\n';
    }
    }
}