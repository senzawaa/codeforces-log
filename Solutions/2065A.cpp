#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() <= 1) {
            cout << s << '\n';
            continue;
        }
        if (s.substr(s.length()-2, 2) == "us") {
            cout << (s.substr(0, s.length() - 2) + 'i') << '\n';
        }
    }
}