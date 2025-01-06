#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[m], i = -1;
    long long t = 0;
    while (m-- && (++i + 1)) { // ++i = 0, which is false so it must be +1
        cin >> a[i];
        if (i != 0 && a[i-1] > a[i])
            t += n;
        t += ((i == 0) ? a[i] - 1 : a[i] - a[i-1]);
    }
    cout << t;
}