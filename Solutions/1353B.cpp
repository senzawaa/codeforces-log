#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        vector<int> cache;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int sm = accumulate(a.begin(), a.end(), 0);
        cache.push_back(sm);
        for (int i = 0; i < k; i++) {
            auto mn = min_element(a.begin(), a.end());
            auto mx = max_element(b.begin(), b.end());
            sm -= *mn;
            sm += *mx;
            a.erase(mn);
            b.erase(mx);
            cache.push_back(sm);
        }
        cout << *max_element(cache.begin(), cache.end()) << '\n';
    }
}