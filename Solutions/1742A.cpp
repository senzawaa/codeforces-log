#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        bool y=0;
        int l[3], s=0;
        cin >> l[0] >> l[1] >> l[2];
        for (int idx = 0; idx < 3; idx++) s+=l[idx];
        for (int idx = 0; idx < 3; idx++) {
            if (s-l[idx] == l[idx]) {
                if (!y)
                    cout << "YES" << endl;
                y=1;
            }
        }
        if (!y)
            cout << "NO" << endl;
    }
}