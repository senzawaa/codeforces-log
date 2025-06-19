#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int o=0,e=0;
        int x, n;
        cin >> x >> n;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a & 1) {
                o++;
            } else e++;
        }
        bool possible = false;
        for (int k = 1; k <= min(o, x); k += 2) {
            if (e >= x - k) {
                possible = true;
                break;
            }
        }
        
        cout << (possible ? "Yes\n" : "No\n");
    }
}