#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int b=0;
        int tm;
        for (int i = 0; i < 3; i ++) {
            cin >> tm;
            b^=tm;
        }
        cout << b << '\n';
    }
}