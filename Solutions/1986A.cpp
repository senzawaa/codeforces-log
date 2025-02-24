#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << ((max({a,b,c})-(min({a,b,c})))) << '\n';
    }
}