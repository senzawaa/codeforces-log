#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int mx = 0;
        int a, b, d, e;
        cin >> a >> b >> d >> e;
        for (auto c : {a+b, e-d, d-b}) {
            mx = max((a + b == c) + (b + c == d) + (c + d == e), mx);
        }
        cout << mx << endl;
    }
}