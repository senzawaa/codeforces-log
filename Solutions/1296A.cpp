#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int ooe[2]={0,0};
        for (int i = 0;i < n; i++) {
            cin >> a[i];
            ooe[a[i]%2]++;
        }
        if ((ooe[0] == 0 && n&1^1) || (ooe[1]==0)) {
            cout << "NO\n";
        } else cout << "YES\n";
    }
}