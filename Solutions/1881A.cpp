#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int a = -1;
        for (int i = 0; i < 6; i++) {
            if (x.find(s) != string::npos) {
                a = i;
                break;
            }
            x = x + x;
        }
        cout << a << '\n';
    }
}