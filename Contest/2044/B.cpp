#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        for (char c : s) {
            switch (c) {
                case 'p':
                    cout << 'q';
                    break;
                case 'q':
                    cout << 'p';
                    break;
                case 'w':
                    cout << 'w';
                    break;
            }
        }
        cout << '\n';
    }
}