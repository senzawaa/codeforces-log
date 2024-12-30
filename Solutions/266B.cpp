#include<iostream>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    char s[n+1];
    for (int i = 0; i < n; i++) cin >> s[i];
    while (t--) {
        for (int idx = 0; idx < n - 1; idx++) {
            if (s[idx] == 'B' && s[idx + 1] == 'G') {
                swap(s[idx], s[idx+1]);
                idx++;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << s[i];
}