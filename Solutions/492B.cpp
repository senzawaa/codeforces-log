#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
    int n, l;
    cin >> n >> l;
    int a[n];
    int i = 0;
    while (i < n) {
        cin >> a[i++];
    }
    sort(a, a + n);
    // for (int num : a) cout << num << endl;
    double mx = -1.0;
    for (int idx = 0; idx < (n-1); idx++) {
        double s = abs(a[idx] - a[idx+1]) / 2.0;
        if (mx < s) mx = (double)s;
    }
    mx = max(mx, (double)a[0]);
    mx = max(mx, (double)(l - a[n-1]));
    cout << fixed << setprecision(9) << mx;
}