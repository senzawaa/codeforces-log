#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<int> dragons(d, 0);
    for (auto num : {k, l, m, n}) {
        for (int idx = num; idx <= d; idx += num) {
            dragons[idx - 1] = 1;
        }
    }
    cout << accumulate(dragons.begin(), dragons.end(), 0);
}