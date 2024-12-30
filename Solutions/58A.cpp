#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin >> s;
    char word[6] = "hello";
    int pos = 0;
    for (char c : s) {
        if (pos == 5) break;
        if (c == word[pos]) pos++;
    }
    cout << ((pos == 5) ? "YES" : "NO");
}