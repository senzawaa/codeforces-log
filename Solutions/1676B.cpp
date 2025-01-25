#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mn = *min_element(a, a + n);
        int sm =0;
        for (int i =0; i < n; i++) {
            sm += a[i] - mn;
        }
        cout << sm << '\n';
    }
}