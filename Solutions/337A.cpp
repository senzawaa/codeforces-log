#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> puzzles(m);
    vector<int> window(n);
    for (int idx=0;idx<m;idx++) {
        cin >> puzzles[idx];
    }
    sort(puzzles.begin(), puzzles.end());
    for (int idx = 0; idx < n; idx++) {
        window[idx] = puzzles[idx];
    }
    int mn = 1e9;
    do {
        // for (int idx = 0; idx < n; idx++) cout << window[idx] << ' ';
        // cout << endl;
        mn = min(mn, (*max_element(window.begin(), window.end()) - *min_element(window.begin(), window.end())));
        // n = m
        if (n != m) {
            window.erase(window.begin());
            window.push_back(puzzles[n]);
        }
    } while (n++ < m);
    cout << mn;
}