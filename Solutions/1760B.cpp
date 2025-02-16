#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mx = 0;
        for (char c : s) {
            mx = max(mx, c-'a'+1);
        }
        cout << mx << '\n';
    }
}