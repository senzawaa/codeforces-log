#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int prev, stk=1, mx=1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!i) {
            prev = a[i];
            continue;
        }
        if (prev < a[i]) {
            stk++;
        } else {
            mx = max(stk, mx);
            stk=1;
        }
        prev = a[i];
    }
    mx = max(stk, mx);
    cout << mx;
}