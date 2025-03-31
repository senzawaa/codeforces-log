#include<iostream>
#include<string>
// #include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<set<int>> ps(2);
    int res = -1;
    while ((res = s.find("AB", res + 1)) != string::npos) {
        ps[0].insert(res);
    }
    res = -1;
    while ((res = s.find("BA", res + 1)) != string::npos) {
        ps[1].insert(res);
    }
    bool ok = false;
    for (auto ab : ps[0]) {
        for (auto ba : ps[1]) {
            if (ab + 2 <= ba) {
                ok = true;
                break;
            }
        }
        if (ok) break;
    }
    if (!ok) {
        for (auto ba : ps[1]) {
            for (auto ab : ps[0]) {
                if (ba + 2 <= ab) {
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}