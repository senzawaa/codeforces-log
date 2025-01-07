#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, a[3];
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    // d->a[0], e->a[1], f->a[2]
    int mx = -1;
    for (int d = 0; d <= 4000; d++) {
        for (int e = 0; (n-(d*a[0]+e*a[1])) >= 0; e++) {    
            if ((n-(d*a[0]+e*a[1])) % a[2] == 0)
                mx = max(mx, d+e+((n-(d*a[0]+e*a[1])) / a[2]));
        }
    }
    cout << mx;
}