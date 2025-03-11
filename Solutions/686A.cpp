#include<iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    long long sm=0;
    for (int i = 0; i < n; i++) {
        char c; long long d;
        cin >> c >> d;
        switch(c) {
            case '+':
                x+=d;
                break;
            case '-':   
                if (d > x) sm++;
                else x -= d;
        }
    }
    cout << x << ' ' << sm;
}
