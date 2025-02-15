#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin >> s;
    char prev = 'a';
    int sm = 0;
    for (char c : s) {
        // cout << min(abs(c-prev), 26-abs(c-prev)) << '\n';
        sm += min(abs(c-prev), 26-abs(c-prev));
        prev = c;
    }
    cout << sm << '\n';
}