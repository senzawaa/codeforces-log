#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;
        cout << ((24 * 60) - (60 * h + m)) << '\n';
    }
}