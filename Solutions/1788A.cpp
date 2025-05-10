#include<iostream>

#define ll long long
#define int ll
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int twos = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2) twos++;
        }
        if (twos & 1) cout << "-1\n";
        else if (twos == 0) cout << "1\n";
        else {
            int c=0;
            for (int i = 0; i < n; i++) {
                if (a[i] == 2) c++;
                if (c == twos/2){
                    cout << (i + 1) << '\n';
                    break;
                }
            }
        }

    }
}