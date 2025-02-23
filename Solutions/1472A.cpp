#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;
        int pw=0;
        int ml=w*h;
        while (ml&1^1) {
            pw++;
            ml/=2;
        }
        // cout << (1 << pw) << '\n';
        if ((1 << pw) >= n) cout << "YES\n";
        else cout << "NO\n";
    }
}