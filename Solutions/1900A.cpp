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
        int cc = 0, cmx = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            switch (c) {
                case '.':
                    cc++;
                    cnt++;
                    break;
                case '#':
                    cmx = max(cmx, cc);
                    cc = 0;
                    break;
            }
        }
        cmx = max(cmx, cc);
        if (cmx == 0) {
            cout << 0;
        } else if (cmx < 3) {
            cout << cnt;
        } else {
            cout << 2;
        }
        cout << '\n';
    }
}