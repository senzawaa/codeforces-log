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
        while (s.front() == 'W') {
            s.erase(s.begin());
        }
        while (s.back() == 'W') {
            s.erase(s.end()-1);
        }
        cout << s.length() << '\n';
    }
}