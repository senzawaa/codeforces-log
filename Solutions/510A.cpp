#include<iostream>
#include<string>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    string bar;
    string dot;
    for (int idx = 0; idx < m; idx++) {
        if (idx != m - 1) dot += '.';
        bar += '#';
    }
    // cout << bar << endl;
    // cout << dot << endl;
    for (int idx = 1; idx <= n; idx++) {
        if (idx % 2) { // odd
            cout << bar << endl;
        } else {
            cout << (((idx / 2) % 2) ? "" : "#") << dot << (((idx / 2) % 2) ? "#" : "") << endl;
        }
    }
}