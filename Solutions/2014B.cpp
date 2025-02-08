#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long sm = 0;
        // ignore pow since a^n % 2 == a % 2
        // for (int i = n; i >= (n - k + 1); --i) {
        //     sm += i;
        // }
        // cout << sm;
        sm = (long long)(ceil((float)k * (float)(((n-k+1) + n))/2));
        // cout << sm;
        if (sm % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}