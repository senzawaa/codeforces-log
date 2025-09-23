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
        string rs="";
        for (int i = 0; i < n-1; i++) {
            int l=i, r=i+1;
            while(s[l] != s[r]) {
                r++;
            }
            rs += s[l];
            i = r;
        }
        cout << rs << '\n';
    }
}