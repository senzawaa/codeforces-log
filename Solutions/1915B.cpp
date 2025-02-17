#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#define map unordered_map
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s[3];
        for (int i = 0; i < 3; i++) {
            cin >> s[i];
        }
        for (auto ss : s) {
            if (find(ss.begin(), ss.end(), '?') != ss.end()) {
                map<char, int> cnt;
                for (char c : ss) {
                    cnt[c]++;
                }
                for (char c : {'A', 'B', 'C'}) {
                    if (cnt[c] == 0) {
                        cout << c << '\n';
                        break;
                    }
                }
            }
        }
    }
}