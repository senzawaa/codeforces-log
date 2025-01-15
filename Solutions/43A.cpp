#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<string, int> ct;
    string s;
    int mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> s;
        ct[s]++;
        mx = max(mx, ct[s]);
    }
    for (auto it=ct.begin();it!=ct.end();it++) {
        if (it->second == mx) {
            cout << it->first;
            break;
        }
    }
}