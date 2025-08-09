#include<iostream>
#include<algorithm>
#include<math.h>
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
        for (int _ = 0; _ < n; _++) {
            for (int i = 1; i < n-1; i++) {
                if (a[i-1] < a[i] && a[i] > a[i+1]) swap(a[i], a[i+1]);
            }
        }  
        int la = 0;
        bool ok = 1;
        for (int i = 0; i < n; i++) { 
            if (a[i] < la) ok = 0;
            la = a[i];
        }
        cout << (ok?"YES\n":"NO\n");
    }
}