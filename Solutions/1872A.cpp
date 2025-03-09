#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (abs(a-b)/(2*c) + ((abs(a-b)%(2*c))!=0)) << '\n';
    }
}