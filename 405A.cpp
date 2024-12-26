#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int n, tmp;
    vector<int> vc;
    cin >> n;
    for (int idx = 0; idx < n; idx++) {
        cin >> tmp;
        vc.push_back(tmp);
    }
    sort(vc.begin(), vc.end());
    for (auto el: vc) {
        cout << el << ' ';
    }
}