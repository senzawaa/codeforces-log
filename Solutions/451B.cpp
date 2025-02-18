#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int dc[2];
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            dc[0] = i;
            break;
        }
    }
    if (dc[0] > n) {
        cout << "yes\n1 1";
        return 0;
    }
    for (int i = dc[0]+1; i < n; i++) {
        if (a[i-1]<a[i]) {
            dc[1] = i-1;
            break;
        }
    }
    for (int i = dc[1]+1; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            cout << "no";
            return 0;
        }
    }
    if (dc[1] > n) dc[1] = n-1;
    for (int i = dc[0]; i < ((dc[0]+dc[1])/2 + (dc[0]+dc[1])%2); i++) {
        swap(a[i], a[dc[1] - (i - dc[0])]);
    }
    // for (auto nm : a) cout << nm << ' ';
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n" << (dc[0]+1) << ' ' << (dc[1]+1);
}