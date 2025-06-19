#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        string init="";
        for (int i = 0; i < 3; i++) {
            cin >> s;
            init += s[0];
        }
        cout << init << '\n';
    }
}