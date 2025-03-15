#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sm=0;
        for (char c : s) {
            switch (c) {
                case 'B':
                    sm--;
                    break;
                default:
                    sm++;
                    break;
            }
        }
        cout << ((sm == 0) ? "YES\n" : "NO\n");
    }
}