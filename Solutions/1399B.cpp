#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int mna = *min_element(a, a + n);
        int mnb = *min_element(b, b + n);
        long long mv = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != mna && b[i] != mnb) {
                int mn = min(a[i]-mna, b[i]-mnb);
                mv += mn;
                a[i] -= mn;
                b[i] -= mn;
            }
            if (a[i] != mna) {
                mv += a[i] - mna;
                a[i] = mna;
            }
            if (b[i] != mnb) {
                mv += b[i] - mnb;
                b[i] = mnb;
            }
        }
        cout << mv << '\n';
    }
}