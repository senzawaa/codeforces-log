#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int s=0;
        for (int n : {b, c, d}) {
            if (n > a) s++;
        }
        cout << s << '\n';
    }
}