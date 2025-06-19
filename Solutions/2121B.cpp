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
        string a, b, c;
        a = s[0];
        b = s[1];
        c = s.substr(2, n - 2);
        // cout << a << ' ' << b << ' ' << c << '\n';
        bool ok = 0;
        do {
            string cmb = a + c;
            if (cmb.find(b, 0) != string::npos) {
                ok = 1;
                cout << "YES\n";
                break;
            }
            a += b;
            b = c[0];
            c = c.substr(1, c.length() - 1);
        } while (c.length() != 0);
        if (!ok) cout << "NO\n";
    }
}