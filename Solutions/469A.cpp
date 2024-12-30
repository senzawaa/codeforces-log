#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> levels(n, 0);
    int p, a;
    for (int _ = 0; _ < 2; _++) {
        cin >> p;
        for (int idx = 0; idx < p; idx++) {
            cin >> a;
            levels[a-1] = 1;
        }
    }
    // cout << accumulate(levels.begin(), levels.end(), 0);
    cout << ((accumulate(levels.begin(), levels.end(), 0) == n) ? "I become the guy." : "Oh, my keyboard!");
}