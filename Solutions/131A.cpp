#include<iostream>
#include<string>
using namespace std;

int main() {
    int caps = 0;
    int lower = 0;
    string s;
    cin >> s;
    for ( char c : s ) {
        if ( c >= 'A' && c <= 'Z' ) {
            caps++;
        } else {
            lower++;
        }
    }
    if ( lower == 1 && s[0] >= 'a' && s[0] <= 'z' || caps == s.size() ) {
        for ( char &c : s ) {
            if ( c >= 'a' && c <= 'z' ) {
                c -= 32;
            } else {
                c += 32;
            }
        }
    }
    cout << s;
}