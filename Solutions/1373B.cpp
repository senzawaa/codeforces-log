#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int aT = 1; // alice's turn
        while (true) {
            int f1 = s.find("01");
            int f2 = s.find("10");
            int n = s.length();
            // cout << (f1 == string::npos) << ' ' << (f2 == string::npos) << '\n';
            if (f1 == string::npos && f2 == string::npos)
                break;
            int pos = f1;
            if (f1 == string::npos) {
                pos = f2;
            }
            if (n == 2) {
                s = "";
                aT ^= 1;
                break;
            }
            s = s.substr(0, pos) + s.substr(pos + 2, n - pos - 2);
            // break;
            aT ^= 1;
        }
        cout << ((aT) ? "NET" : "DA") << '\n';
    }
}