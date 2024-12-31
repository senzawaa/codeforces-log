#include<iostream>
#include<numeric>
#include<algorithm>
#define ll long long
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        ll a[n];
        ll acc = 1;
        for (int idx = 0; idx < n; idx++) {
            cin >> a[idx];
            while(a[idx] % 2 == 0) {
                acc *= 2;
                a[idx] /= 2;
            }
        }
        ll mx = *max_element(a, a+n);
        cout << mx * acc - mx + accumulate(a, a+n, 0LL) << endl;
    }
}