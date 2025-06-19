#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int tt=0;
        int oa = a, ob = b;
        for (int sl : {c, d}) {
            a = oa, b = ob;
            for (int i = 0; i < 2; i++) {
                int w=0;
                for (int su : {a, b}) {
                    // cout << su << ' ' << sl << '\n';
                    if (su > sl) {
                        w++;
                    }
                }
                swap(a, b);
                if (w == 2) tt++;
            }
        }
        cout << tt << '\n';
    }
}