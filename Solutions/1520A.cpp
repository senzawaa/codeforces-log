#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // char s[n+1];
        // s[n]='\0';
        char c;
        vector<char> stack;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            cin >> c;
            if (stack.empty() || stack.back() != c) {
                auto f = find(stack.begin(), stack.end(), c);
                if (f != stack.end()) {
                    ok = 1;
                    cout << "NO\n";
                    break;
                }
                stack.push_back(c);
            }
        }
        if (!ok) {
            cout << "YES\n";
        }
    }
}