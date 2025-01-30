#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        if (n & 1) {
            cout << "NO\n";
            continue;
        }
        // int bit=0;
        // for (char c : s) {
        //     bit ^= c;
        // }
        // cout << (bit == 0 ? "YES\n" : "NO\n");
        string l = s.substr(0, n/2);
        string r = s.substr(n/2, n/2);
        cout << (l == r ? "YES\n" : "NO\n");
    }
}