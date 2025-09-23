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
        int l, r;
        l = s.find('1');
        r = s.rfind('1');
        // cout << l << " " << r << endl;

        if (l == -1) {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        for (int i = l; i <= r; i++) {
            if (s[i] == '1') ans++;
        }
        ans = (r - l + 1 - ans);
        cout << ans << endl;

    }
}