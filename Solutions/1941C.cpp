#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n - 2; i++) {
            string f3l = s.substr(i, 3);
            string f5l = s.substr(i, min(5, n - i));
            if (f3l == "map" || f3l == "pie") {
                ans++;
            }
            if (f5l == "mapie") {
                ans--;
            }
        }
        cout << ans << '\n';
    }
}