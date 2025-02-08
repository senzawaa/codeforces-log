#include<iostream>
// #include<unordered_map>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    char c;
    // unordered_map<char, int> mp;
    bool ok = 0;
    for (int i = 0; i < (n * m); i++) {
        if (ok) break;
        cin >> c;
        // cout << (int)(c) << ' ';
        // if (c == '\n' && (--i || true))
        //     continue;
        // mp[c]++;
        switch (c) {
            case 'C':
            case 'M':
            case 'Y':
                cout << "#Color\n";
                ok = 1;
                break;
        }
    }
    if (!ok) {
        cout << "#Black&White\n";
    }
}