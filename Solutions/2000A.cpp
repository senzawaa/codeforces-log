#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() > 2 && s[0] == '1' && s[1] == '0' && stoi(s.substr(2, s.size())) > 1 && s[2] != '0') {
            cout << "YES\n";
        } else cout << "NO\n";
    }
}