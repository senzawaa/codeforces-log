#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        char _;
        cin >> h >> _ >> m;
        // cout << h << ' ' << m << '\n';
        string sfx;
        if (h == 0) {h=12; sfx="AM";}
        else if (h < 12) sfx="AM";
        else if (h == 12) sfx="PM";
        else if (h > 12) {h-=12; sfx="PM";}
        if (h/10==0) cout << '0';
        cout << h << ':';
        if (m/10==0) cout << '0';
        cout << m << ' ' << sfx << '\n';
    }
}