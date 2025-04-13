#include<iostream>
// #include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int st[3] = {0,0,0};
        int n;
        cin >> n;
        n-=3;
        for (int i = 2; i >= 0; i--) {
            int tmp = min(n, 25);
            st[i] = tmp;
            n -= tmp;
        }
        for (int ii : st) {cout << char('a' + ii);}
        cout << '\n';
    }
}