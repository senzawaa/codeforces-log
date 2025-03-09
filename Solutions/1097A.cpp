#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin >> s;
    string tmp;
    bool ok = 0;
    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        if (tmp[0] == s[0] || tmp[1] == s[1]) {
            cout << "YES\n";
            ok = 1;
            break;
        }
    }
    if (!ok) cout << "NO\n";
}