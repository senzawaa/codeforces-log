#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec;
        int tmp;
        for (int i = 0; i < 2*n; i++) {
            cin >> tmp;
            if (find(vec.begin(), vec.end(), tmp) == vec.end()) {
                // cout << tmp;
                vec.push_back(tmp);
            }
        }
        for (auto nm : vec)
            cout << nm << ' ';
        cout << '\n';
    }
}