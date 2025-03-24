#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        // s[n] = '\0';
        // for (int i = 0; i < n; i++) cin >> s[i];
        cin >> s;
        int cnt = 0, ans = 0;
        bool ok = 0;
        for (int i = 0; i < n; ++i) {
            if (ok) cnt++;
            if (s[i] == 'B' && !ok) {
                ok = 1;
                ++cnt; 
            } 
            if (cnt == k && ++ans) {
                cnt = 0; ok = 0;
            }
        }
        if (cnt) ans++;
        cout << ans << '\n';
    }
}