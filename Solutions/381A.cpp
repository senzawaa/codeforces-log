#include<iostream>
// #include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++) cin >> c[i];
    int l = 0, r = --n, t = 0;
    int s = 0, d = 0;
    int *addr[2] = {&s, &d};
    while (l <= r && ++t) {
        if (c[l] > c[r])
            *addr[(t-1)%2] += c[l++];
        else 
            *addr[(t-1)%2] += c[r--];
    }
    cout << s << ' ' << d;
}