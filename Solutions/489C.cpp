#include<iostream>
#include<string>
using namespace std;
int main() {
    int m, s;
    cin >> m >> s;
    if (s == 0 || (m * 9) < s) {
        if (m == 1 && s == 0) {
            cout << "0 0";
            return 0;
        }
        cout << "-1 -1";
        return 0;
    }
    string mn="1";
    int curr=s-1;
    int sl=curr/9 + (curr%9!=0);
    for (int i = 1; i < (m-sl+1);i++) mn+='0';
    for (int i = 0; i < sl;i++) {
        if (curr%9) {
            mn.back() += curr%9;
            curr -= curr%9;
        } else {
            mn.back() += 9;
            curr -= 9;
        }
        mn+='0';
    }
    mn.erase(mn.end()-1);
    string mx="0";
    curr = s;
    for (int i = 0; i < m; i++) {
        if (curr >= 9) {
            mx.back() += 9;
            curr -= 9;
        } else {
            mx.back() += curr % 9;
            curr = 0;
        }
        mx+='0';
    }
    mx.erase(mx.end() - 1);
    cout << mn << ' ' << mx;
}