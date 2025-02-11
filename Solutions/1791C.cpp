#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        while (((b.front() - '0') + (b.back() - '0')) == 1) {
            b.erase(b.begin());
            b.erase(b.end() - 1);
        }
        cout << b.size() << '\n';
    }
}