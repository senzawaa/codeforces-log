#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool ok = false;
        auto f = find(s.begin(), s.end(), c);
        while (f != s.end()) {
            // cout << (f - s.begin()) << ' ';
            if ((f - s.begin() + 1) % 2 == 1) {
                cout << "YES\n";
                ok = true;
                break;
            }
            f = find(f + 1, s.end(), c);
        }
        if (!ok) {
            cout << "NO\n";
        }
    }
}