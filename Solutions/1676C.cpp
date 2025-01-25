#include<iostream>
// #include<cstring>
using namespace std;
int cmp(const char a[], const char b[]) {
    int n = 0;
    while (a[n] != '\0') n++;
    int sm = 0;
    for (int i = 0; i < n; i++) {
        sm += abs(a[i] - b[i]);
    }
    return sm;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        char s[n][m + 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> s[i][j];
            s[i][m] = '\0'; 
        }

        int mn = 1e9;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                mn = min(mn, abs(cmp(s[i], s[j])));
            }
        }
        cout << mn << '\n';
    }

}