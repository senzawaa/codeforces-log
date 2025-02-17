#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x[4], y[4];
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        int xs[2]={x[0]}, ys[2]={y[0]};
        for (int i = 1; i < 4; i++) {
            if (x[i] != xs[0]) xs[1] = x[i];
            if (y[i] != ys[0]) ys[1] = y[i]; 
        }
        cout << abs((ys[1]-ys[0]) * (xs[1]-xs[0])) << '\n';
    }
}