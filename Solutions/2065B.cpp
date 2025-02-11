#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char prev = 0;
        char c;
        bool ok = 0;
        for (char cc : s) {
            if (prev == cc) {
                cout << "1\n";
                ok = 1;
                break;
            }
            prev = cc;
        }
        if (!ok) {
            cout << s.length() << '\n';
        }
    }
}