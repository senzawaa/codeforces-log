#include<iostream>
#include<numeric>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sm = accumulate(a, a+n, 0);
        cout << (sm - (n-1)) << '\n';
    }
}