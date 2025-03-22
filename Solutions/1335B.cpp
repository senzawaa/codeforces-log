#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string rep;
        for (int i = 0; i < b; i++) {
            rep += 'a' + i;
        }
        string s;
        for (int i = 0; i+rep.length() < n;) {
            s += rep;
            i += rep.length();
        }
        s += rep.substr(0, n-s.length());
        cout << s << '\n';
    }
}