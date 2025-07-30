#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];
        int l = 0, r = n - 1;
        for (int i = 0; i < p.size(); i++) {
            if (p[l] > p[r] ^ (i % 2)) {
                r--;
                cout << 'R';
            } else {
                l++;
                cout << 'L';
            }
        }
        cout << '\n';
    }
}