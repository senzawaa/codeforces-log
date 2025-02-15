#include<iostream>
#include<string>
using namespace std;
int main() {
    string x;
    cin >> x;
    long long mn = stoll(x);
    int i = 0;
    for (char &c : x) {
        if (i++ == 0 && c == '9') {
            continue;
        }
        int m = c-'0';
        c = ('9' - c) + '0';
        mn = min(mn, stoll(x));
        if (c-'0' > m)
            c = ('9' - c) + '0';
    }
    cout << mn;
}