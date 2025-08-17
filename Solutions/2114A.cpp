#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int s;
        cin >> s;
        int sqt = sqrt(s);
        if (sqt * sqt != s) {
            cout << "-1\n";
            continue;
        }
        if (sqt == 1) {
            cout << "0 1\n";
            continue;
        }
        // cout << floor((float)sqt/2-1) << ' ' << ceil((float)sqt/2 + 1);
        // or you could just
        cout << "0 " << sqt << '\n';
    }
}