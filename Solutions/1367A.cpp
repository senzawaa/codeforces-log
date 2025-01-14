#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char prev = 255;
        bool ign = false;
        cout << s[0];
        for (int i = 1; i < s.length()-1; i++)
            if (s[i-1] == s[i])
                cout << s[i++];
        cout << s[s.length() - 1];
        cout << '\n';
    }
}