#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
void chmx(int &a, int b) {a = max(a, b);}
int main() {
    int n;
    cin >> n;
    char c;
    string s;
    int mx = -1;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> c;
        s += c;
        if (s.length() == 2) {
            mp[s]++;
            chmx(mx, mp[s]);
            s.erase(s.begin());
        }
    }
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second == mx) {
            cout << it->first;
            break;
        }
    }
}