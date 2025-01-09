#include<iostream>
// #include<string>
using namespace std;
int main() {
    int map[26];
    for (int i=0;i<26;i++) map[i] = 0;
    for (char c : "codeforces") {
        map[c-'a']=1;
    }
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        cout << (map[c-'a'] ? "YES" : "NO") << '\n';
    }
}