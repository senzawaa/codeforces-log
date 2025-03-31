#include<iostream>
#include<string>
using namespace std;
const string ans = "314159265358979323846264338327";
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sc=0;
        for (int i = 0; i < s.length(); i++) {
            if (ans[i] == s[i]) sc++;
            else break;
        }   
        cout << sc << '\n';
    }
}