#include<iostream>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;
    int i = 0, c, s;
    do {
        c = (k*++i - r) % 10;
        s = (k*i) % 10;
    } while ( c != 0 && s != 0 );
    cout << i;
}