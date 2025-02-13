#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> l(n);
    for (int i = 0; i < n; i++)
        cin >> l[i].first >> l[i].second;
    sort(l.begin(), l.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    });
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        d[i] = l[i].first - l[i].second;
    }
    int lf = 0, r = n - 1;
    bool ok = false;
    for (int i = 1; i < n; i++) {
        if (l[i].second < l[i-1].second) {
            ok = true;
            break;
        }
    }

    if (ok) {
        cout << "Happy Alex\n";
    } else {
        cout << "Poor Alex\n";
    }
}