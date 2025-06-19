#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b) swap(a, b);
        vector<int> v;
        for(int i = a; i <= b; i++) v.push_back(i);
        // cout << ((find(v.begin(), v.end(), c) != v.end() ? 1 : 0) + (find(v.begin(), v.end(), d) != v.end() ? 1 : 0));
        cout << ((find(v.begin(), v.end(), c) != v.end() ? 1 : 0) + (find(v.begin(), v.end(), d) != v.end() ? 1 : 0) == 1 ? "YES\n" : "NO\n");
    }
}