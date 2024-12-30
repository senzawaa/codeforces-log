#include<iostream>
#include<string>
using namespace std;
int main() {
    auto tolower = [&](char s) -> char {
        if ('A' <= s && s <= 'Z') return ('a' - 'A') + s;
        return s;
    };
    string input;
    cin >> input;
    for (char c : input) {
        switch (tolower(c)) {
            case 'a':
            case 'o':
            case 'y':
            case 'e':
            case 'u':
            case 'i':
                break;
            default:
                cout << '.' << tolower(c);
                break;
        }
    }
}