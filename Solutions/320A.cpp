#include<iostream>
#include<string>
using namespace std;
int main() {
    string n;
    cin >> n;
    int qt=0;
    bool ok = 0;
    for (char c : n) {
        switch (c) {
            case '1':
                qt = 2;
                break;
            case '4':
                if (qt-- == 0 && !ok) {
                    cout << "NO\n";
                    ok = 1;
                }
                break;
            default:
                if (!ok)
                    cout << "NO\n";
                ok = 1;
                break;
        }
    }
    if (!ok) {
        cout << "YES\n";
    }
}