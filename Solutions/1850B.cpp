#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        int mx[2] = {0, 0};
        for (int i = 0; i < n; i++) {
            if (a[i] <= 10 && mx[0] < b[i]) {
                mx[1] = i+1;
                mx[0] = b[i];
            }
        }
        cout << mx[1] << '\n';
    }
}