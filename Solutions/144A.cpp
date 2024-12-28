#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, seconds = 0;
    cin >> n;
    int sol[n];
    int mx[2] = {-1, -1};
    int mn[2] = {101, -1};
    for (int idx = 0; idx < n; idx++) {
        cin >> sol[idx];
        if (sol[idx] > mx[0]) {
            mx[0] = sol[idx];
            mx[1] = idx;
        }
    }
    for (int idx = n - 1; idx >= 0; idx--) {
        if (sol[idx] < mn[0]) {
            mn[0] = sol[idx];
            mn[1] = idx;
        }
    }
    bool overlap = (mx[1] > mn[1]);
    // cout << overlap << endl;
    cout << mx[1] + (n - 1 - mn[1]) - overlap;
}