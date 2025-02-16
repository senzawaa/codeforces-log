#include<iostream>
#include<string>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    string s;
    if (t == 10) {
        if (n == 1) {
            cout << "-1";
            return 0;
        }
        s += '1';
        for (int i = 1; i < n; i++) s += '0';
    } else {
        for (int i = 0; i < n; i++) s += (t+'0');
    }
    cout << s;
}