#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d[2][2] = {{0, 1}, {0, -1}}; // 1 for front, -1 for back, it will be swapped
        int n;
        cin >> n;
        vector<int> a;
        int m;
        for (int i = 0; i < n; i++) {
            cin >> m;
            a.push_back(m);
        }
        d[0][0] += a[0];
        a.erase(a.begin());
        swap(d[0], d[1]);
        int trn=1;
        int prev = d[1][0];
        while (!a.empty()) {
            int curr = 0;
            while (curr <= prev && !a.empty()) {
                curr += a[d[0][1] == 1 ? 0 : (a.size() - 1)];
                a.erase(d[0][1] == 1 ? a.begin() : (a.end() - 1));
            }
            d[0][0] += curr;
            prev = curr;
            swap(d[0], d[1]);
            trn++;
        }
        if (d[0][1] == 1)
            cout << trn << ' ' << d[0][0] << ' ' << d[1][0] << '\n';
        else
            cout << trn << ' ' << d[1][0] << ' ' << d[0][0] << '\n';

    }
}