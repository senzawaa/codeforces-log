#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        for (int i = n-1; i >= 0; i--) {
            cout << (find(s[i].begin(), s[i].end(), '#') - s[i].begin() + 1) << ' ';
        }
        cout << '\n';
    }
}