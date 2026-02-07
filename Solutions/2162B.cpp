#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> zeros;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') zeros.push_back(i+1); 
        }
        cout << zeros.size() << '\n';
        for (int nm : zeros) {
            cout << nm << ' ';
        }
        cout << '\n';
    }
}