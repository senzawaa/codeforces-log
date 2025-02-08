#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> res;
    if (n & 1) {
        res.push_back(3);
        n -= 3;
    }
    while (n != 0) {
        res.push_back(2);
        n -= 2;
    }
    cout << res.size() << '\n';
    for (int nm : res) {
        cout << nm << ' ';
    }
}