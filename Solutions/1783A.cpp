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
        sort(a, a+n);
        int l = 0, r = n - 1;
        int* addr[] = {&l, &r};
        if (a[l] == a[r]) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            cout << a[*addr[(i + 1) % 2]] << ' ';
            *addr[(i + 1) % 2] += (i % 2 ? 1 : -1);
        }
        cout << '\n';
    }
}